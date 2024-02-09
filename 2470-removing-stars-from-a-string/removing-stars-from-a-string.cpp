class Solution {
public:
    bool isalp(char c){
        string si="abcdefghijklmnopqrstuvwxyz";
        for(auto &i:si){
            if(c==i)return true;
            
        }
        return false;
    }
    string removeStars(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(!st.empty() and isalp(s[i])){
                st.push(s[i]);
            }
            else if(!st.empty() and s[i]=='*'){
                st.pop();
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