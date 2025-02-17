class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ma=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){c++; ma=max(ma,c);}
            else c=0;
    }
    return ma;
    }
};