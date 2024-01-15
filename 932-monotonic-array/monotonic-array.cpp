class Solution {
public:
    bool increasing(vector<int>&nums){
        int flag=0;
        for(int i=0;i<nums.size()-1;i++){
                if(nums[i]>nums[i+1]){flag=1;break;}
        }
       return flag!=1;
    }
    bool decreasing(vector<int>&nums){
        int flag=0;
        for(int i=0;i<nums.size()-1;i++){
                if(nums[i]<nums[i+1]){flag=1;break;}
        }
          return flag!=1;
    }

    bool isMonotonic(vector<int>& nums) {
        return increasing(nums) or decreasing(nums);
    }
};