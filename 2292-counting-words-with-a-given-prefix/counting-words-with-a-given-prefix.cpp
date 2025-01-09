class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int pn = pref.length();
        for (string word : words) {
            if (word.length() >= pn) {
                if (word.substr(0, pn) == pref) {
                    count++;
                }
            }
        }
        return count;
    }
};