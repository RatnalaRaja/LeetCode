class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double window=0;
        for(int i=0;i<k;i++){
            window+=nums[i];
        }
        double maxAvg=window;
        for(int j=k;j<nums.size();j++){
            window+=nums[j]-nums[j-k];
            maxAvg=max(maxAvg,window);
        }
        return maxAvg/k;
    }
};