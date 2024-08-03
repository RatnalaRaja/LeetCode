class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>maxH;
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            maxH.push({abs(arr[i] - x), arr[i]});
            if(maxH.size()>k)maxH.pop();
        }
        while(!maxH.empty()){
            v.push_back(maxH.top().second);
            maxH.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }
};