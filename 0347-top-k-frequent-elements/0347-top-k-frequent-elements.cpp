class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        int n = nums.size();

        // Step 1: frequency count
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        // Step 2: map → vector
        vector<pair<int, int>> v;

        for (auto it : mp) {
            v.push_back({it.first, it.second});
        }

        // Step 3: sort by frequency
        sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
            return a.second > b.second;
        });

        // Step 4: take top k
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};