class Solution {
public:
    bool search(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==k) return true;
        }
        return false;
        
    }
};