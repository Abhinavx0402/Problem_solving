class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int left=0;
      int n=nums.size();
      int right=n-1;
      int idx=n-1;

      vector<int>ans(n);

      while(left <= right){
        if(abs(nums[left])>abs(nums[right])){
            ans[idx]=nums[left] * nums[left];
            left++;
        }else{
             ans[idx]=nums[right] * nums[right];
             right--;
        }
        idx--;
      }  
      return ans;
    }
};