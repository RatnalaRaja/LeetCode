class Solution {
public:
   bool isDigit(char s) {
    return (s >= '0' && s <= '9');
}

int maxDepth(string s) {
    stack<char> st;
    int maxi = 0;

    for (char c : s) {
        if (c == '(') {
            st.push(c);
            maxi = max(maxi, static_cast<int>(st.size()));
        } else if (c == ')') {
            st.pop();
        }
    }

    return maxi;
}
};