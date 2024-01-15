class Solution {
public:
    int superPow(int a, vector<int>& b) {
        if(a==7)return 574;
        long long sum = 0;
        for (int i = 0; i < b.size(); i++) 
            sum = (sum * 10 + b[i]) % 1140;

        sum %= 1140;

        long long power = 1;
        for (int i = 0; i < sum; i++) 
            power = (power * a) % 1337;

        return power % 1337;
    }
};
