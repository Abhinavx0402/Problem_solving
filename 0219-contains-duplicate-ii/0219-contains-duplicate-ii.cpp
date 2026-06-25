class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int,int>mp;  //store kr rha h values


       int n=nums.size();

       for(int i=0; i<n;i++){
         if(mp.find(nums[i])!=mp.end() && abs(i-mp[nums[i]])<=k){
            return true;
        }
            mp[nums[i]]=i;
       } 
        return false;
    }
};