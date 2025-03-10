class Solution {
public:
    int dp[201][1001];
    int solo(string &s1,string &s2,int n,int m){
        if(n==0 || m==0){
            return 0;
            if(dp[n][m]!=-1)return dp[n][m];
        }
        if(s1[n-1]==s2[m-1])return dp[n][m]= 1+solo(s1,s2,n-1,m-1);
        return dp[n][m]=max(solo(s1,s2,n-1,m),solo(s1,s2,n,m-1));
    }
    int longestPalindromeSubseq(string s) {
        string palins=s;
        reverse(s.begin(),s.end());
        int n=s.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==palins[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        //memset(dp,-1,sizeof(dp));
        return dp[n][n];

    }
};