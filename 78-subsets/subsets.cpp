class Solution {
public:
    void subsetcom(vector<int>& nums,vector<int>&output,int start,vector<vector<int>>&ans){
        if(start>=nums.size()){
            ans.push_back(output);
            return;
        }
        subsetcom(nums,output,start+1,ans);
       
        output.push_back(nums[start]);
        subsetcom(nums,output,start+1,ans);
        output.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        vector<vector<int>>ans;
        int start=0;
        subsetcom(nums,output,start,ans);
        return ans;
    }
};