class Solution {
public:
    int numDecodings(string s) {
        if (s.empty() || s[0] == '0') {
            return 0;
        }

        int n = s.length();
        vector<int> newvec(n + 1, 0);
        newvec[0] = 1;
        newvec[1] = 1;

        for (int i = 2; i <= n; ++i) {
            int oneDigit = s[i - 1] - '0';
            int twoDigits = stoi(s.substr(i - 2, 2));

            if (oneDigit != 0) {
                newvec[i] += newvec[i - 1];
            }

            if (10 <= twoDigits && twoDigits <= 26) {
                newvec[i] += newvec[i - 2];
            }
        }

        return newvec[n];
    }
};