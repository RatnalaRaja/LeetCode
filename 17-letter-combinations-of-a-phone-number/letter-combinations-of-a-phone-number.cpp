class Solution {
public:

    void back(string digits,string str,vector<string>&res,unordered_map<char,string>&mp,int ind){
        if(ind==digits.size()){
            res.push_back(str);
            return;
        }
        for(auto &i:mp[digits[ind]]){
            str.push_back(i);
            back(digits,str,res,mp,ind+1);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty())return {};
        unordered_map<char,string>mp={  {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}};
            string str="";
            vector<string>result;
            back(digits,str,result,mp,0);
            return result;
    }
};