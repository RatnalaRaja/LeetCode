class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        // int k=0;
        // int l=1;
        // int j=2;
        int co=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int check=abs(arr[i]-arr[j]);
                for(int k=j+1;k<arr.size();k++){
                    int chicki=abs(arr[j]-arr[k]);
                    int chiku=abs(arr[i]-arr[k]);
                    if(check<=a and chicki<= b and chiku<=c)co++;
                }
            }
        }
        return co;
    }
};