class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.empty())
            return 0;

        int st = 0;
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                st++;
                nums[st] = nums[i];
            }
        }

        return st + 1;
    }
};