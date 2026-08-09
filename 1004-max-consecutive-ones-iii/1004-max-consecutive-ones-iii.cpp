class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int left = 0;
        int len = 0;
        int zeros = 0;

        int n = nums.size();

        for (int i = 0; i < n; i++) {

            // Add right element
            if (nums[i] == 0) {
                zeros++;
            }

            // Shrink if invalid
            while (zeros > k) {

                if (nums[left] == 0) {
                    zeros--;
                }

                left++;
            }

            // Window is valid
            len = max(len, i - left + 1);
        }

        return len;
    }
};