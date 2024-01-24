class Solution {
public:
    void printsubsets(vector<int>& arr,vector<int>&output,set<vector<int>>&ans,int i){
        if(i>=arr.size()){
            ans.insert(output);
            return ;
        }
        
        printsubsets(arr,output,ans,i+1);
        output.push_back(arr[i]);
        printsubsets(arr,output,ans,i+1);
        output.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>output;
        set<vector<int>>ans;
        vector<vector<int>>ansii;
        int i=0;
         printsubsets(nums,output,ans,i);
         copy(ans.begin(),ans.end(),back_inserter(ansii));
         return ansii;
    }
};