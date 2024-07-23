class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        int n=nums.size();
        vector<int>v(n);
        
        for(int i=0;i<n;i++){
            if(i%2==0)even.push_back(nums[i]);

            else{
                odd.push_back(nums[i]);
            }
        }
        sort(begin(even),end(even));
       sort(begin(odd),end(odd),greater<int>());
        for (int i = 0; i < even.size(); ++i) {
            v[2 * i] = even[i];
        }
        for (int i = 0; i < odd.size(); ++i) {
            v[2 * i + 1] = odd[i];
        }
        
       return v;
    }
};