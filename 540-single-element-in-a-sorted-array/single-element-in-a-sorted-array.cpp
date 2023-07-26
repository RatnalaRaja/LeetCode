class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int b=0;
        for(int i=0;i<nums.size();i++){
            b^=nums[i];
        }
        return b;
    }
};