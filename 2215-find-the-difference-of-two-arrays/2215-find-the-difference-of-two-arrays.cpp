class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen1;
        unordered_set<int> seen2;

        vector<int> ans1;
        vector<int> ans2;

        for (int i = 0; i < nums1.size(); i++) {

            seen1.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {

            seen2.insert(nums2[i]);
        }

        // nums1 elements not in nums2
        for (int x : seen1) {
            if (seen2.find(x) == seen2.end()) { //reason for this-❌ seen1[i] is invalid.

// An unordered_set is not stored by index like a vector. It stores elements in hash buckets, so there is no operator[].
                ans1.push_back(x);
            }
        }

        // nums2 elements not in nums1
        for (int x : seen2) {
            if (seen1.find(x) == seen1.end()) {
                ans2.push_back(x);
            }
        }

        return {ans1, ans2};
    }
};