class Solution {
public:
    int distanceTraveled(int m, int a) {   
        int x=(m-1)/4;
        if(a>=x)m+=x;
        else m+=a;
        return 10*m;
    }
};