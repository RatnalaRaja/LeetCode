class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++)
        {
            int num=i;
            int r=0;
            int flag=0;
            while(num>0)
            {
                r=num%10;
                if( r==0 or i%r!=0 )
                {
                    flag=1;
                   
                }
                num=num/10;
            }
            if(flag==0){
                v.push_back(i);
            }
        }
        return v;
    }
};