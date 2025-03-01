class Solution {
public:
    int dp[201][10001];
    int subCo(vector<int>&nums,int n,int target){
        if(n==0 and target==0)return 1;
        if(n==0 and target!=0)return 0;
        if(dp[n][target]!=-1)return dp[n][target];
        if(nums[n-1]>target)return dp[n][target]=subCo(nums,n-1,target);
        return dp[n][target]=subCo(nums,n-1,target-nums[n-1])+subCo(nums,n-1,target);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        memset(dp,-1,sizeof(dp));
        int s1=(sum-target)/2;
        if((sum-target)%2!=0 or (sum-target)<0)return 0;
        return subCo(nums,n,s1);
    }
};