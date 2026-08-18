class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int i = 0; i <= nums.size()-k; i++) {
            set<int> s;

            for(int j = i; j < i+k; j++)
                s.insert(nums[j]);

            for(int x : s)
                mp[x]++;
        }

        int ans = -1;

        for(auto [x,c] : mp) {
            if(c == 1)
                ans = max(ans,x);
        }

        return ans;
    }
};