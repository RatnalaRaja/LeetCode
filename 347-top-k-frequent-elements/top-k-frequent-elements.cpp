class Solution {
public:
static bool cmp(pair<int,int >& a, pair<int,int >& b) {
    return (a.second>b.second);
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        map<int,int>ma;
        for(int i=0;i<nums.size();i++){
            ma[nums[i]]++;
        }   
        vector<pair<int,int>> f ;
        for(auto &i: ma) {
            f.push_back(i);
        }
        sort(f.begin(),f.end(),cmp) ;
        for(auto &i: f) {
            if(k > 0)v.push_back(i.first) ;
            k--;
        }
        return v;
    }
};