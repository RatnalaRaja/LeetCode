class Solution {
public:
    bool vowel(char s){
        string vo="aeiouAEIOU";
        for(auto i:vo){
            if(s==i)return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int n=s.length()/2;
        int c=0,c2=0;
        for(int i=0;i<n;i++){
            if(vowel(s[i]))c++;
        }
        for(int j=n;j<s.length();j++){
            if(vowel(s[j]))c2++;
        }
        if(c==c2)return true;
        else{
            return false;
        }
    }
};