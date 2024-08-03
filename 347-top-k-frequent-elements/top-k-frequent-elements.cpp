class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>miniHeap;
        for(auto &i:nums){
            mp[i]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            miniHeap.push({i->second,i->first});
            if(miniHeap.size()>k){
                miniHeap.pop();
            }
        }
        while(!miniHeap.empty()){
            v.push_back(miniHeap.top().second);
            miniHeap.pop();
        }
        return v;
    }
};