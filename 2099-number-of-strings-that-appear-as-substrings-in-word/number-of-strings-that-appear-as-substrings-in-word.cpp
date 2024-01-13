class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        vector<string> v;
        for(int i = 0; i < word.length(); i++) {
            for(int j = i; j < word.length(); j++) {
                v.push_back(word.substr(i, j - i + 1));
            }
        }
        
        int c = 0;
        for(int i = 0; i < patterns.size(); i++) {
            for (const string& substr : v) {
                if (patterns[i] == substr) {
                    c++;
                    break;  
                }
            }
        }
        return c;
    }
};
