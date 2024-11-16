class Solution {
public:
    int square(int n){
        return n*n;
    }
    int digit(int n){
        int sum=0;
        while(n>0){
            int digi=n%10;
            sum+=square(digi);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int o=n;
        int f=digit(n);
        while(f!=1 and o!=f){
            o=digit(o);
            f=digit(digit(f));
        }
        return f==1;
    }
};