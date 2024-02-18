class Solution {
public:
    void changeletter(string s,int ind,vector<string>&result){
        if(ind==s.size()){
            result.push_back(s);
        }
        if(s[ind]>='0' and s[ind]<='9'){
            changeletter(s,ind+1,result);
        }
        else if(s[ind]>='A' and s[ind]<='Z'){
            changeletter(s,ind+1,result);
            s[ind]=s[ind]+32;
            changeletter(s,ind+1,result);
        }
        else if(s[ind]>='a' and s[ind]<='z'){
            changeletter(s,ind+1,result);
            s[ind]=s[ind]-32;
            changeletter(s,ind+1,result);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string>result;
        changeletter(s,0,result);
        return result;
    }
};