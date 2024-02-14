#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v;
        // Separate positive and negative numbers into two separate vectors
        vector<int> positive;
        vector<int> negative;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                positive.push_back(nums[i]);
            } else {
                negative.push_back(nums[i]);
            }
        }
        // Rearrange elements alternatively
        int i = 0, j = 0;
        while(i < positive.size() || j < negative.size()) {
            if(i < positive.size()) {
                v.push_back(positive[i]);
                i++;
            }
            if(j < negative.size()) {
                v.push_back(negative[j]);
                j++;
            }
        }
        return v;
    }
};
