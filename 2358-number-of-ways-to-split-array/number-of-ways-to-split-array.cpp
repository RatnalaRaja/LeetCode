class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long>pre(nums.size());
        pre[0]=nums[0];
        for(int i=1;i<nums.size()-1;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        long long int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            if(pre[i]>=sum-pre[i])c++;
        }
        return c;
    }
};