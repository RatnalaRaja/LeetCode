class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(auto & i:nums){
            mp[i]++;
        }
         
        int maxFreq = 0;
        int result = -1;
        
        for (auto &i : mp) {
            if (i.first % 2 == 0 && i.second > maxFreq) {
                maxFreq = i.second;
                result = i.first;
            }
        }
        
        return result;
    }
};