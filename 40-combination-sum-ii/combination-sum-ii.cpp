class Solution {
public:
    void combi(vector<int>& candidates, int target,set<vector<int>>&comb,vector<int>&v,int start){
        if(target==0){
            comb.insert(v);
            return ;
        }
        for(int i=start;i<candidates.size();i++){
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue;
            }
            if(candidates[i]>target)break;
            v.push_back(candidates[i]);
            combi(candidates,target-candidates[i],comb,v,i+1);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        set<vector<int>>com;
        vector<vector<int>>vcom;
        combi(candidates,target,com,v,0);
        copy(com.begin(),com.end(),back_inserter(vcom));
        return vcom;
    }
};