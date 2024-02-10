class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>res;
        int mini=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            int absu=abs(arr[i]-arr[i-1]);
            if(absu<mini){mini=absu;res.clear();}
            if(absu==mini)res.push_back({arr[i-1],arr[i]});
        }
        return res;
    }
};