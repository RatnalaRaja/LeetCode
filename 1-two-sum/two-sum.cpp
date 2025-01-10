class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int co=target-nums[i];
            if(mp.find(co)!=mp.end()){
                v.insert(v.end(),{mp[co],i});
            }
            mp[nums[i]]=i;
        }
        return v;
    }
};