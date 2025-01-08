class Solution {
public:
    string winningPlayer(int x, int y) {
        int ans=min(x,y/4);
        return ans%2==1?"Alice":"Bob";
    }
};