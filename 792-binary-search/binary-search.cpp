class Solution {
    private:
    int bis(vector<int>&nums,int target,int s,int e){
        if(s>e) return -1;
    int mid=s+(e-s)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]>target) return bis(nums,target,s,mid-1);
    else { return bis(nums,target,mid+1,e);}
    }
public:
    int search(vector<int>& nums, int target) {
        
        return bis(nums,target,0,nums.size()-1);
    }
};