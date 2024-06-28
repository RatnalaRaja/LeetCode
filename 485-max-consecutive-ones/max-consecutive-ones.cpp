class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int cons=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){cons+=1;
            maxi=max(maxi,cons);}
            else if(nums[i]==0){
                cons=0;
            }
        }
        return maxi;
    }
};