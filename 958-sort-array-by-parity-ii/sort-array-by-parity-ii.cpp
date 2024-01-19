class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>v(nums.size());
        int evenIndex = 0;
        int oddIndex = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                v[evenIndex] = nums[i];
                evenIndex += 2;
            } else {
                v[oddIndex] = nums[i];
                oddIndex += 2;
            }
        }

        return v;
    }
};