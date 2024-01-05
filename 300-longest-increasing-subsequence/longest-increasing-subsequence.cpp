class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       vector<int>v(nums.size(), 0);
       int count=0;
       for(int i:nums){
           int s=0,e=count;
           while(s!=e){
               int mid=(s+e)/2;
               if(v[mid]<i) s=mid+1;
               else e=mid;
           }
           v[s]=i;
           if(s==count)count++;
       } 
       return count;
    }
};