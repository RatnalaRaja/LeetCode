class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string si="";

        for(int i=0;i<numRows;i++){
            int index=i;
            int south=2*(numRows-1-i);
            int north=2*i;
            bool direction=true;
            while(index<s.length()){
                si+=s[index];
                if(i==0)index+=south;
                else if(i==numRows-1){
                    index+=north;
                }
                else{
                     if(direction){
                    index+=south;
                }
                    else{
                        index+=north;
                    }
                }
                direction=!direction;
            }
        }
        return si;
    }
};