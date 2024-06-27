class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total=accumulate(nums.begin(),nums.end(),0);
        int lefti=0;
        for(int i=0;i<nums.size();i++){

            int rightii=total-lefti-nums[i];

            if(lefti==rightii)return i;
            lefti+=nums[i];
        }
        return -1;
    }
};