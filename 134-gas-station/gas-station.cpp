class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int defi=0;
        int bal=0;
        int start =0;

        for(int i=0;i<gas.size();i++){
            bal+=gas[i]-cost[i];
            if(bal<0){
                defi+=bal;
                start=i+1;
                bal=0;
            }
        }
        if(defi+bal>=0)return start;
        else return -1;
    }
};