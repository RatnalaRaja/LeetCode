class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string result="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(st.size()>0){
                    result+=s[i];
                }
            st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.size()>1){
                    result+=s[i];
                }
                st.pop();
            }
        }
        return result;
    }
};