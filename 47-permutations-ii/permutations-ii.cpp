class Solution {
public:
    void permutation(vector<int>& nums,int i,set<vector<int>>&s){
        int n=nums.size();
        if(i==n-1){
            s.insert(nums);
            return;
        }
        for(int j=i;j<n;j++){
            swap(nums[i],nums[j]);
            permutation(nums,i+1,s);
            swap(nums[i],nums[j]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>s;
        permutation(nums,0,s);
        copy(s.begin(),s.end(),back_inserter(ans));
        return ans;
    }
};