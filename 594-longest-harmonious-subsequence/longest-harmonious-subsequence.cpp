class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(begin(nums),end(nums));
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi=0;
        for(int i=0;i<nums.size()-1;i++){
            if(abs(nums[i]-nums[i+1])==1){
                maxi=max(maxi,mp[nums[i]]+mp[nums[i+1]]);
            }
        }
        return maxi;
    }
};