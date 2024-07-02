class Solution {
public:
    int findKthPositive(vector<int>& A, int k) {

        int n=A.size();
        int l=0,h=n-1;

        if(k<A[0])return k;
        if(k>A[n-1]-n)return k+n;

        while(l<h){
            int mid=(l+h)/2;
            if(A[mid]-mid-1>=k)h=mid;
            else l=mid+1;
        }
        return l+k;
    }
};