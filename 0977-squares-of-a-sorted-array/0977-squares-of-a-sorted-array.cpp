class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // int n = nums.size();

        // for (int i = 0; i < n; i++) {
        //     nums[i] = nums[i] * nums[i];
        // }
        // sort(nums.begin(), nums.end());

        // return nums;


        int st=0;
        int n=nums.size();
        int end=n-1;
        int idx=n-1;

        vector<int>ans(n);

        while( st <= end){
            if(abs(nums[st])>abs(nums[end])){
                ans[idx]=nums[st]*nums[st];
                st++;
            }else{
                ans[idx]=nums[end]*nums[end];
                end--;
            }
            idx--;
        }
        return ans;
    }
};