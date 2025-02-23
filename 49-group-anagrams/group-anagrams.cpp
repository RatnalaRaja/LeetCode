class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>str_mp;
        for(int i=0;i<strs.size();i++){
            string dum=strs[i];
            sort(begin(dum),end(dum));
            str_mp[dum].push_back(strs[i]);
        }
        for(auto &i:str_mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};