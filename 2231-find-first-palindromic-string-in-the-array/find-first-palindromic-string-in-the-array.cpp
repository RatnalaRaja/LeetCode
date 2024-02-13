class Solution {
public:
bool ispalin(string s){
    int i=0;
    int j=s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    string firstPalindrome(vector<string>& words) {
        string s;
        for(auto &i:words){
            if(ispalin(i)){
                s+=i;
                break;
            }
        }
        return s;
    }
};