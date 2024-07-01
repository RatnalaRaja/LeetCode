class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v(nums.size());
         int posIndex = 0;
        int negIndex = 1;

        for (int num : nums) {
            if (num > 0) {
                v[posIndex] = num;
                posIndex += 2;
            } else {
                v[negIndex] = num;
                negIndex += 2;
            }
        }

        return v;
    }
};