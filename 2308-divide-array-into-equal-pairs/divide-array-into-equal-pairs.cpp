class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        int pair=n/2;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second%2!=0)
            {
                return false;
            }
        }
        return true;
    }
};