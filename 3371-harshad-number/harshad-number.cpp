class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        if(x==100)return 1;
        int k=x;
        int rem=x%10;
        x=x/10;
        cout<<x<<" "<<k<<" "<<rem; ;
        if(k%(rem+x)==0)return rem+x;
        return -1;
    }
};