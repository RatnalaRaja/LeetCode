class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int j=1;
        while(j<=nums.size()){
            if(s.contains(j)){
                j++;
            }
            else{
                return j;
            }
        }
        return nums.size()+1;
    }
};