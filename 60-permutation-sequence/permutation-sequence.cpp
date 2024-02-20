class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>v(n);
        iota(v.begin(),v.end(),1);
        for(int i=0;i<k-1;i++){
            next_permutation(v.begin(),v.end());
        }
        string s;
        for(int i=0;i<n;i++){
            s+=to_string(v[i]);
        }
        return s;
    }
};