class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int>v;
        int c=0;
        for(int i=0;i<h.size();i++){
            v.push_back(h[i]);
        }
        sort(h.begin(),h.end());
        for(int i=0;i<h.size();i++){
            if(h[i]!=v[i])c++;
        }
        return c;

        
    }
};