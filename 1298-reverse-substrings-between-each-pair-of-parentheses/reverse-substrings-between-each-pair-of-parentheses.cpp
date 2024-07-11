class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        string res="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(res.length());
            }
            else if(s[i]==')'){
                reverse(res.begin()+st.top(),res.end());
                st.pop();
            }
            else{
                res.push_back(s[i]);
            }
        }
        return res;
    }
};