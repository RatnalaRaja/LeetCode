class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int c=1;
        for(auto &i:sentences){
            int mx=1+count(i.begin(),i.end(),' ');
        c=max(mx,c);
        }
        return c;
    }
};