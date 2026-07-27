class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int st = 0;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] != val) {
                nums[st] = nums[i];
                st++;
            }
        }
        return st;
    }
};