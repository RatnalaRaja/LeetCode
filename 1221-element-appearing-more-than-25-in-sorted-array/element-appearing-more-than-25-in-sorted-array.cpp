class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       unordered_map<int,int>mp;
       for(int i=0;i<arr.size();i++){
           mp[arr[i]]++;
       } 
       int ans=0;
       int n=arr.size()/4;
       for(auto &i:mp){
           if(i.second>n) ans= i.first;
       }
       return ans;
    }
};