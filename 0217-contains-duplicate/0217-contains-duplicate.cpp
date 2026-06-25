class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> dp;

        for (int i = 0; i < nums.size(); i++) {
            if (dp.find(nums[i]) != dp.end()) {
                return true;
            }

            dp.insert(nums[i]);
        }

        return false;
     }

    };