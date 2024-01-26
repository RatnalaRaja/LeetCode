class Solution {
public:
    void fisu(vector<int>& nums,vector<int>&v,set<vector<int>>&st, int n,int i){
        if(i>=nums.size()){
            if(v.size()<=1)return ;
            for(int i=1;i<v.size();i++){
                if(v[i]<v[i-1])return ;
            }
            st.insert(v);
            return ;
        }
        v.push_back(nums[i]);
        fisu(nums,v,st,n,i+1);
        v.pop_back();
        fisu(nums,v,st,n,i+1);
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>v;
        set<vector<int>>st;
        vector<vector<int>>vt;
        fisu(nums,v,st,nums.size(),0);
        copy(st.begin(),st.end(),back_inserter(vt));
        return vt;
    }
};