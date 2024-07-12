class Solution {
public:
    int distributeCandies(vector<int>& can) {
        set<int>se;
        for(int i=0;i<can.size();i++){
            se.insert(can[i]);
        }
        int k=can.size()/2;
        if(k<se.size())return k;
        return se.size();

    }
};