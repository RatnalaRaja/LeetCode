class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int c=0;
        for(auto &i:nums)mp[i]++;
        for(auto&i:mp){
            if(k==0){
                if(i.second>1)c++;
            }
            else {if(mp.count(i.first+k))c++;}
        }
        return c;
    }
};