class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int k=prices[0]+prices[1];
        if(k<=money){
            return abs(money-k);
            
        }
        return money;
    }
};