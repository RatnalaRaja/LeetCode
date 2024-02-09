class Solution {
public:
    bool isalp(char c){
        string s="abcdefghijklmnopqrstuvwxyz";
        for(auto &i:s){
            if(c==i)return true;
        }
        return false;
    }
   string removeStars(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '#' && !st.empty()) {
            st.pop(); 
        } else if (isalpha(c)) {
            st.push(c); 
        }
    }
    string ans;
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(begin(ans), end(ans));
    return ans;
}

    bool backspaceCompare(string s, string t) {
        if(removeStars(s)==removeStars(t))return true;
        return false;
    }
};