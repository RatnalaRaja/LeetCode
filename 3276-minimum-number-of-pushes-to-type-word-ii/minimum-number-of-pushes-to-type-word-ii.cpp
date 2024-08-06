class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        for(auto &i:word){
            mp[i]++;
        }
        vector<int>v;
        for(auto &i:mp){
            v.push_back(i.second);
        }
        sort(v.rbegin(),v.rend());
        int press=0;
        for(int i=0;i<v.size();i++){
                press+=v[i]*(1+i/8);
        }
        return press;
    }
};