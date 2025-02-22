class Solution {
public:
    string removeOuterParentheses(string s) {
        string k="";
        stack<char>st;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                if (!st.empty()) k += '(';
                st.push('(');
            } 
            else if (s[i] == ')') {
                st.pop();
                if (!st.empty()) k += ')';
            }
        }
        
        return k;
    }
};