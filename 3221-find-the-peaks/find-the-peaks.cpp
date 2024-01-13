class Solution {
public:
    vector<int> findPeaks(vector<int>& m) {
        vector<int>v;
        for(int i=1;i<m.size()-1;i++){
            if((m[i-1]<m[i]) and (m[i]>m[i+1])){
                v.push_back(i);
            }
        }
        return v;
    }
};