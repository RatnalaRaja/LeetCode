class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c=0;
        int j=1;
        sort(nums.begin(),nums.end());
       for(int i=0; i<nums.size(); i++){
    for(int j=i+1; j<nums.size(); j++){
        if(nums[i] == nums[j]){
            c++;
        }
    }
}       return c;
    }
};