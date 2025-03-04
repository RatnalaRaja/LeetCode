class Solution {
public:
    int dp[301][5001];

    int coins(int amount, vector<int>& coin, int n) {
        if (amount == 0) return 1;
        if (n == 0 || amount < 0) return 0;
        if (dp[n][amount] != -1) return dp[n][amount];

        return dp[n][amount] = coins(amount - coin[n - 1], coin, n) + coins(amount, coin, n - 1);
    }

    int change(int amount, vector<int>& coin) {
        memset(dp, -1, sizeof(dp));
        return coins(amount, coin, coin.size());
    }
};
