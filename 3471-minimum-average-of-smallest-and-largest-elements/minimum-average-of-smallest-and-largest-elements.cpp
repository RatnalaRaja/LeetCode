class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>minAvg;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
         double ag=0;
        while(i<=j){
            ag=(nums[i]+nums[j])/2.0;
            i++;
            j--;
            minAvg.push_back(ag);
           
        }
         
        return *min_element(begin(minAvg),end(minAvg));

    }
};