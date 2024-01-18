class Solution {
public:
    int climbStairs(int n) {
           int f1=1;
	int f2=2;
	int f3;
	for(int i=0;i<n-2;i++){
	f3=f1+f2;
	int temp=f2;
	f2=f3;
	f1=temp;
    }
        return f3;
        }
};