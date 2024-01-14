class Solution {
public:
    bool dividingnumber(int n){
        int temp=n;
        while(n>0){
            int rem=n%10;
            if(rem==0 or temp %rem!=0)return false;
            n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++){
            if(dividingnumber(i))v.push_back(i);
        }
        return v;
    }
};