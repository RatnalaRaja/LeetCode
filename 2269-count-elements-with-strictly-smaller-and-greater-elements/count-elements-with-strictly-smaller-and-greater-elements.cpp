class Solution {
public:
    int countElements(vector<int>& nums) {
        int minii=*min_element(nums.begin(),nums.end());
        int maxii=*max_element(nums.begin(),nums.end());
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>minii and nums[i]<maxii)c++;
        }
        return c;
    }
};