class Solution {
private:
    int searchele(vector<int>&num,int target,int l,int e){
        //int l=0,e=num.size()-1;
        while(l<=e){
            int mid=l+(e-l)/2;
            if(num[mid]==target) return mid;
            else if(num[mid]<target) l=mid+1;
            else e=mid-1;
        }
        return -1;
    }
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int v=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            int k=searchele(nums,target-nums[i],i+1,v);
            if(k!=(-1)) return {i+1,k+1};
        }
        return {-1,-1};
    }
};