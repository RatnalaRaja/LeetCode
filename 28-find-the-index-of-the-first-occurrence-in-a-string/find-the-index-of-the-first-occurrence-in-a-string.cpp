class Solution {
public:
    int strStr(string haystack, string needle) {
        int nh=haystack.length();
        int nn=needle.length();
        for(int i=0;i<=nh-nn;i++){
            if(haystack.substr(i,nn)==needle){
                return i;
            }
        }
        return -1;
    }
};