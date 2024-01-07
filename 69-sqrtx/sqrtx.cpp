class Solution {
public:
    int mySqrt(int x) {
        if(x==0 or x==1)return x;
      int left = 0, right = x ;
        while (left < right) {
            long long mid = left + (right - left) / 2;
            if (mid * mid > x) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left - 1;
    }
};