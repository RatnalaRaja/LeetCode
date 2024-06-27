class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>pre(gain.size()+1);
        pre[0]=0;
        int sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            pre[i+1]=sum;
        }
        return *max_element(pre.begin(),pre.end());
    }
};