class Solution {
public:
    void combii(vector<int>&v,int k, int n,int index,vector<int>&out,vector<vector<int>>&output){
        if(out.size()==k and n==0){
            output.push_back(out);
            return ;
        }
        if(n < 0 || index == v.size() || out.size() > k)return;
        for(int i=index;i<v.size();i++){
            out.push_back(v[i]);
            combii(v,k,n-v[i],i+1,out,output);
            out.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        for(int i=1;i<=9;i++){
            v.push_back(i);
        }
        vector<vector<int>>ans;
        vector<int>out;
        combii(v,k,n,0,out,ans);
        return ans;
    }
};