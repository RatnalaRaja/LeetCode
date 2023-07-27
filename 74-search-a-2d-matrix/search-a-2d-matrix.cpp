class Solution {
    private:
    bool Bisearch(vector<int>&nums,int target){
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target)return true;
            else if(nums[mid]>target) e=mid-1;
            else s=mid+1;
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &i:matrix){
                if(Bisearch(i,target)) return true; 
            }
        return false;
    }
};