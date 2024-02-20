class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int c=0;
       vector<int>remainder(60,0);
       for(int i:time){
           int remain=i%60;
           int com=(60-remain)%60;
           c+=remainder[com];
           remainder[remain]++;
       }
       return c;
    }
};