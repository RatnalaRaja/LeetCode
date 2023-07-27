class Solution {
    private:
    int lowerBound(vector<int>&nums,int target){
        int s=0,e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return s;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int low=lowerBound(nums,target);
        int high=lowerBound(nums,target+1)-1;
        if(low<nums.size() and nums[low]==target){
            return {low,high};
        }
        return {-1,-1};
    }
};