class Solution {
public:
    bool isFascinating(int n) {
        int k=2*n;
        int f=3*n;
        string s1= to_string(k);
        string s2= to_string(f);
        string s3= to_string(n);
        string  s4= s1+s2+s3;
        string h="123456789";
        sort(s4.begin(),s4.end());
        if(s4==h)
        return true;
        else{
            return false;
        }
    }
};