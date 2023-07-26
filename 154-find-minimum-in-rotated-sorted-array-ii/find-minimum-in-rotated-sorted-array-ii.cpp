class Solution {
public:
    int findMin(vector<int>& nu) {
        sort(nu.begin(),nu.end());
        return nu[0];
    }
};