class Solution {
public:
    int dp[201][10001];
    int minco(vector<int>& coins, int amount,int n){
        if(amount==0)return 0;
        if(n==0 || amount<0)return INT_MAX-1;
        //if(amount<coins[n-1])return 0;
        if(dp[n][amount]!=-1)return dp[n][amount];
        return dp[n][amount]=min(1+minco(coins,amount-coins[n-1],n),minco(coins,amount,n-1));
      
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        memset(dp,-1,sizeof(dp));
        int result=minco(coins,amount,n);
        return (result==INT_MAX-1)?-1:result;
    }
};