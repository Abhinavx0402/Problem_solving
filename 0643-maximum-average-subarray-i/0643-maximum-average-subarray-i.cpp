class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int window=k;

        int sum=0;

        //build window

        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int ans=sum; //stpre the ans

        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];

            ans=max(ans,sum);
        }
        return (double)ans/k;
    }
};