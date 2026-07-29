#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> temp;
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    temp.insert(nums1[i]);
                }
            }
        }
        vector<int> result;
        for(int num : temp) {
             result.push_back(num);
        }
        return result;

        //unordered_set<int>seen;

//         vector<int>ans;
// //      
//         for(int i=0;i<nums1.size();i++){
//             seen.insert(nums1[i]);
//         }

//         //checkimg of nums 2 in seen set
//         for(int i=0;i<nums2.size();i++){
//             if(seen.find(nums2[i])!=seen.end()){
//                 ans.push_back(nums2[i]);
//                seen.erase(nums2[i]);

//             }
//         }
//         return ans;

    }
};