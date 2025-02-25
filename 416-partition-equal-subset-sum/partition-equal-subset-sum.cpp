class Solution {
public:
int dp[201][10001];
    bool part(vector<int>&nums,int sum,int n){
        //int tar=accumulate(nums.begin(),nums.end(),0);
        //sum=tar/2;
        if(sum==0)return true;
        if(n==0 || sum<0)return false;
        if(dp[n][sum]!=-1)return dp[n][sum];
        //if(tar%2!=0)return false;
        else {
            if(nums[n-1]<=sum){
                return dp[n][sum]= part(nums,(sum)-nums[n-1],n-1) || part(nums,(sum),n-1);
            }
            else {
                return dp[n][sum]=part(nums,sum,n-1);
            }

        }
    }
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int su=sum/2;
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        if(sum%2!=0)return false;
        return part(nums,su,n);
    }
};