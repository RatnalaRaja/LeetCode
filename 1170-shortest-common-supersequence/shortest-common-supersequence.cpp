class Solution {
public:
    void LCS(string &str1, string &str2,int n,int m,vector<vector<int>>&dp){

        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
    }
    string shortestCommonSupersequence(string str1, string str2) {
        string result="";
        int n=str1.length();
        int m=str2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        LCS(str1,str2,n,m,dp);

        int i=n;
        int j=m;

        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                result.push_back(str1[i-1]);
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]){
                result.push_back(str1[i-1]);
                i--;
            }
            else{
                result.push_back(str2[j-1]);
                j--;
            }
        }
        while(i>0){
            result.push_back(str1[i-1]);
            i--;
        }
        while(j>0){
            result.push_back(str2[j-1]);
            j--;
        }
        reverse(begin(result),end(result));
        return result;

    }
};
