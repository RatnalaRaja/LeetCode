class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int SP=INT_MAX,Pro=0;
        for(int i:prices){
            SP=min(i,SP);
            Pro=max(Pro,i-SP);
        }
        return Pro;
    }
};