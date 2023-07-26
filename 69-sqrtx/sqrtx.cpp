class Solution {
    private:
        int sqrte(int n,long long x){
            if(x*x<=n) return x;
            else return sqrte(n,(x+(n/x))/2);
        }
public:
    int mySqrt(int x) {
        long long n=x;
        int a=sqrte(x,n);
        return a;
    }
};