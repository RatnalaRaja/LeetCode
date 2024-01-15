class Solution {
public:
    int superPow(int a, vector<int>& b) {
        if (a % 1337 == 0) return 0;

        long long sum = 0;
        for (int i = 0; i < b.size(); i++) 
            sum = (sum * 10 + b[i]) % 1140;

        sum += 1140; // Adjust sum to ensure it's not 0
        return modPow(a, sum, 1337);
    }

private:
    int modPow(int base, long long exponent, int mod) {
        int result = 1;
        base = base % mod;

        while (exponent > 0) {
            if (exponent % 2 == 1)
                result = (result * base) % mod;
            exponent >>= 1;
            base = (base * base) % mod;
        }

        return result;
    }
};
