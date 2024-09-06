class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int maxi=0,lsum=0,rsum=0;
        int l=c.size();
        int rind=l-1;
        for(int i=0;i<=k-1;i++){
            lsum+=c[i];
            maxi=lsum;
        }
        for(int i=k-1;i>=0;i--){
            lsum=lsum-c[i];
            rsum+=c[rind];
            rind-=1;

            maxi=max(maxi,lsum+rsum);
        }
        return maxi;
    }
};