class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>right(n);
        vector<int>left(n);
        vector<int>ans(n);
        right[0]=0;
        left[n-1]=0;
        for(int i=1;i<n;i++){
            right[i]=right[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            left[i]=left[i+1]+nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=abs(left[i]-right[i]);
        }
        return ans;
    }
};