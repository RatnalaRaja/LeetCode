class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &i:nums){
            mp[i]++;
        }
        int k=0;
        for(auto &i:mp){
            if(i.second==(nums.size()/2)){
                k=i.first;
            }
        }
        return k;
    }
};