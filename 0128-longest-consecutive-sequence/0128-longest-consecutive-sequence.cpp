class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int ans=0;
        
        int longest=0;

        for(int i=0;i <nums.size();i++){
            st.insert(nums[i]);         

        }

        for(int x : st){
            if(st.find(x-1)== st.end()){ //iska ye mtlb hua ki for 1 -->0 doesnt exist...

                int currnum=x;
                int currleng=1;

                while (st.find(currnum + 1) != st.end()) {
                     currnum++;
                     currleng++;
                }  
                longest=max(longest,currleng); 
            }
        }
        return longest;
    }
};