class Solution {
public:
    int solve(vector<int>& cost , int currStep,vector<int>&dp){
        // BASE CASE:
        if(currStep >= cost.size()) 
            return 0;
        if(dp[currStep]!=-1)return dp[currStep];
        return dp[currStep] = cost[currStep] + min(solve(cost , currStep+1,dp) , solve(cost , currStep+2,dp));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size() ;
        vector<int>dp(n+1,-1);
        int ans = min(solve(cost , 1,dp),solve(cost,0,dp));

        return ans;
    }
};