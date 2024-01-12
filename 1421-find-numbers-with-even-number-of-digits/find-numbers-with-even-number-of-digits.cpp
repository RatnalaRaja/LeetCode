class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector<string>s;
        for(int i=0;i<nums.size();i++){
            s.push_back(to_string(nums[i]));
        }
        vector<int>v;
        int c=0;
        for(int i=0;i<s.size();i++){
            v.push_back(s[i].length());
        }
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0)c++;
        }
        return c;
    }
};