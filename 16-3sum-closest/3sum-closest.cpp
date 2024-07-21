class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(begin(nums), end(nums));
        int n = nums.size();
        int closestSum = 1000000000; // Initialize with a large value

        for (int k = 0; k < n - 2; ++k) {
            int i = k + 1;
            int j = n - 1;

            while (i < j) {
                int sum = nums[k] + nums[i] + nums[j];
                if (abs(target - sum) < abs(target - closestSum)) {
                    closestSum = sum;
                }

                if (sum < target) {
                    i++;
                } else {
                    j--;
                }
            }
        }

        return closestSum;
    }
};
