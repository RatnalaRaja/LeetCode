class Solution {
public:
    int mySqrt(int x) {
        int s=1;
        int e=x;
        int ans=0;
        long long int mid=s+(e-s)/2;
        if(x==0 or x==1) return x;
        while(s<=e){
            if((mid*mid)==x)return mid;
            if ((mid*mid)>x)e=mid-1;
            else  {ans=mid;s=mid+1;}
            mid=s+(e-s)/2;
        }
        return ans;
    }
};