class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        unordered_set<int> freq;

        for (auto it : mp) {

            // If frequency already exists, it's not unique
            if (freq.find(it.second) != freq.end()) {
                return false;
            }

            // Otherwise store the frequency
            freq.insert(it.second);
        }

        return true;
    }

}
;