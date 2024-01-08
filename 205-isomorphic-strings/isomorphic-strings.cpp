class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256]={0};
        int charac[256]={0};
        for(int i=0;i<s.length();i++){
            if(hash[s[i]]==0 and charac[t[i]]==0){
                hash[s[i]]=t[i];
                charac[t[i]]=true;
            }
        }
        for(int i=0;i<s.length();i++){
            if(char(hash[s[i]]!=t[i]))return false;
        }
        return true;
    }
};