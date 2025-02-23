class Solution {
public:
    static bool customSort(pair<int,int>&a,pair<int,int>&b){
        if(a.second==b.second)return a.first<b.first;
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mpp;
       for(auto&i:nums)mpp[i]++;
       vector<pair<int,int>>freq(mpp.begin(),mpp.end());
       vector<int>v;
       sort(freq.begin(),freq.end(), customSort);
       for(int i=0;i<k;i++){
            v.push_back(freq[i].first);
       }
       return v;
    }
};