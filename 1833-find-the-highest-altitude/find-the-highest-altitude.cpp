class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>pre(gain.size()+1,0);
        for(int i=1;i<pre.size();i++){
            pre[i]=pre[i-1]+gain[i-1];
        }
        return *max_element(pre.begin(),pre.end());
    }
};