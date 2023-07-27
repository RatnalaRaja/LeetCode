class Solution {
    private:
    int lowerbound(vector<int>&nums,int target,int s,int e){
        //s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
            if(s>e) return s;
            if(nums[mid]<target){
                return lowerbound(nums,target,mid+1,e);
            }
            else{
                return lowerbound(nums,target,s,mid-1);
        }
        return s;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int v=nums.size()-1;
        int start=lowerbound(nums,target,0,v);
        int end=lowerbound(nums,target+1,0,v)-1;
        if(start<nums.size() and nums[start]==target) return{start,end};
        else  return {-1,-1};
    }
};