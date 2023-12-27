class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int ans = 0;
        for(int i = 1; i < n; ++i){
            int maxi = neededTime[i-1];
            ans += maxi;
            while(colors[i] == colors[i-1]){
                maxi = max(neededTime[i], maxi);
                ans += neededTime[i];
                i++;
            }
            ans -= maxi;
        }
        return ans;
    }
};