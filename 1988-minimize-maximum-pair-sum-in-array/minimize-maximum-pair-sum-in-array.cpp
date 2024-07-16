class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int maxi=0;
        int sum=0;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
          sum=  nums[i]+nums[j];
          i++;j--;
          maxi=max(maxi,sum);
        }
        return maxi;
    }
};