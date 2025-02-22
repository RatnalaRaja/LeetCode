class Solution {
public:
    bool rotateString(string s, string goal) {
         if (s.length() != goal.length()) return false;
        string k = s + s;
        if (k.find(goal) != string::npos) return true;
        return false;
    }
};