class Solution {
public:
    bool isletter(char c){
        string s="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(int i=0;i<s.length();i++){
            if(c==s[i])return true;
        }
        return false;
    }
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(!isletter(s[i]))i++;
            else if(!isletter(s[j]))j--;
            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};