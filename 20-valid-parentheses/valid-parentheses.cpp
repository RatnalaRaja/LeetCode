class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
            for(int i=0;i<s.length();i++){
                 char c=s[i];
                
                if(c=='(' || c=='[' || c=='{'){
                    st.push(s[i]);
                }
                else if( !st.empty() && ( st.top()=='(' and c==')' or st.top()=='[' and c==']' or st.top()=='{' and c=='}')){
                    st.pop();
                }
               else {
                return false;
               }

            }
      
        
        return st.size()==0;
    }
};