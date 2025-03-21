class Solution {
public:
    int lcs(string &s1,string &s2,int n,vector<vector<int>>dp){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 or j==0)dp[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1])dp[i][j]=1+dp[i-1][j-1];
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n];



    }
    int minInsertions(string s) {
        int n=s.length();
        string s1=s;
        
        reverse(begin(s),end(s));
       vector<vector<int>> dp(n + 1, vector<int>(n+1));
       int k=lcs(s,s1,n,dp);
       cout<<k;
       return n-k;

    }
};