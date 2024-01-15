class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> win, loose;
        for (auto i = 0; i < matches.size(); i++) {
            win[matches[i][0]]++;
            loose[matches[i][1]]++;
        }
        
        vector<int> one, zero;
        auto i = loose.begin();
        while (i != loose.end()) {
            if (i->second == 1) one.push_back(i->first);
            i++;
        }
        
        auto j = win.begin();
        while (j != win.end()) {
            if (j->second >= 1 && loose[j->first] == 0) zero.push_back(j->first);
            j++;
        }
        
        sort(zero.begin(), zero.end());
        sort(one.begin(), one.end());
        
        vector<vector<int>> ans;
        ans.push_back(zero);
        ans.push_back(one);
        return ans;
    }
};
