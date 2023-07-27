class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,e=n-1;
        while(l<=e){
            int mid=l+(e-l)/2;
            if(nums[mid]==target) return mid;
            else if(nums[l]<=nums[mid]){
                if(nums[l]<=target and nums[mid]>=target){
                    e=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(nums[mid]<=target and nums[e]>=target){
                    l=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};