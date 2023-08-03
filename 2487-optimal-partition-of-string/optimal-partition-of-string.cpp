class Solution {
public:
    int partitionString(string s) {
        set<char>st;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])!=st.end()){
                c++;
                st.clear();
                st.insert(s[i]);
            }
            else {
                st.insert(s[i]);
            }
        }
        return c+1;
    }
};