class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int c=nums[0];
        for(int i:nums){
            if((abs(i)<abs(c))||abs(i)==abs(c) && i>c)c=i;
        }
        return c;
    }
};