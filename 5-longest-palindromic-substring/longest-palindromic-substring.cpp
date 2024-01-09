class Solution {
public:
    bool palindrome(string &s, int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if(palindrome(s,i,j)){
                    string t=s.substr(i,j-i+1);
                    ans=t.size()>ans.size() ?t:ans;

                }
            }
        }    
        return ans;
    }
};