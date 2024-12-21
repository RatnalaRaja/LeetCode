class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candi=0;
        for(int in:nums){
            if(count==0){
                candi=in;
            }
           if(in==candi)count++;
            else count--;
        }
        return candi;
    }
};