class Solution {
public:
    int numOfStrings(std::vector<std::string>& patterns, std::string word) {
        std::vector<std::string> v;
        for(int i = 0; i < word.length(); i++) {
            for(int j = i; j < word.length(); j++) {
                v.push_back(word.substr(i, j - i + 1));
            }
        }
        
        int c = 0;
        for(int i = 0; i < patterns.size(); i++) {
            // Check if the current pattern exists in the vector 'v'
            for (const std::string& substr : v) {
                if (patterns[i] == substr) {
                    c++;
                    break;  // Break the inner loop if a match is found
                }
            }
        }
        return c;
    }
};
