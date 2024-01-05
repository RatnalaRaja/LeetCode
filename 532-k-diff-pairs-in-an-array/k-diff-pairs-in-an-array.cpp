class Solution {
public:
    int binarysear(vector<int>v,int start,int target){
        int e=v.size()-1;
        int mid=start+(e-start)/2;
        while(start<=e){
            if(v[mid]==target){
                return mid;
            }
            else if(v[mid]>target){
                e=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(e-start)/2;
        }
        return -1;

    }
    int findPairs(vector<int>& nu, int k) {
        sort(nu.begin(),nu.end());
        set<int>s;
        for(int i=0;i<nu.size();i++){
            if(binarysear(nu,i+1,nu[i]+k)!=-1)s.insert(nu[i]+k);
        }
    return s.size();
    }
};