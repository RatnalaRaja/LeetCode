class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
       for(int i=0;i<s.length();i++){
           if(st.empty()){
               st.push(s[i]);
           }
           else if(!st.empty() and st.top()==s[i]){
               st.pop();
           }
           else{
               st.push(s[i]);
           }
       }
       string ans;
       while(!st.empty()){
           ans+=st.top();
           st.pop();
       }
        reverse(begin(ans),end(ans));
        return ans;
    }
};