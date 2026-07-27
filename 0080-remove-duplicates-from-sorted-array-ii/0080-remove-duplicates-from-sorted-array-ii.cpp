class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int st=2;
        int n=nums.size();
        
        if(nums.size()<2){
            return n;
        }

        for(int i=2; i<n;i++){
            if(nums[i]!=nums[st-2]){
                nums[st]=nums[i];
                st++;
            }
        
        }
        return st;

    }
};