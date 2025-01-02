class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        long long int c=0;
        for(int i=0;i<size(nums);i++){
            c+=i-mp[i-nums[i]]++;
        }
        return c;
    }
};