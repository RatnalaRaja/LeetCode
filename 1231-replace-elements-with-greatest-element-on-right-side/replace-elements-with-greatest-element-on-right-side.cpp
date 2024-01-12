class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();

         vector<int>ans(n);

         for(int i =0; i<n-1; i++){
             int maxi = *max_element(arr.begin()+i+1,arr.end());
             ans[i] = maxi;
         }
         ans[n-1] = -1;

         return ans;
    }
};