class NumArray {
public:
vector<int>&preSum;
    NumArray(vector<int>& nums):preSum(nums) {
        // vector<int>preSum(nums.size());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];;
            preSum[i]=sum;
        }
    }
    
    int sumRange(int left, int right) {
        if (left == 0) return preSum[right];
        return preSum[right] - preSum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */