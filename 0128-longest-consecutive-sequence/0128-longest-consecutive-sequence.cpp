// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n=nums.size();
//         unordered_set<int>st;


//         for(int i=0; i<n;i++){
//             st.insert(nums[i]);
//         }

//         int longest=0;

//         for(int i=0; i<n;i++){

//             if(st.find(nums[i]-1)==st.end()){
//                 int curr=nums[i];
//                 int currleng=1;

//                 while (st.find(curr + 1) != st.end()) {
//                      curr++;
//                      currleng++;
//                 }  
//                 longest=max(longest,currleng);

//             }
//         }
//         return longest;

//     }
// };

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;

        for (int num : nums) {
            st.insert(num);
        }

        int longest = 0;

        for (int num : st) {

            if (st.find(num - 1) == st.end()) {

                int curr = num;
                int currleng = 1;

                while (st.find(curr + 1) != st.end()) {
                    curr++;
                    currleng++;
                }

                longest = max(longest, currleng);
            }
        }

        return longest;
    }
};