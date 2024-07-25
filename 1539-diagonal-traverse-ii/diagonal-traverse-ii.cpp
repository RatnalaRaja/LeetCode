class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int>ans;
        map<int,vector<int>>m;
        int n=nums[0].size();
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                m[i+j].push_back(nums[i][j]);
            }
        }
        for(auto x:m){
            reverse(x.second.begin(),x.second.end());
            for(auto i:x.second){
                ans.push_back(i);
            }
        }
        return ans;
    }
};