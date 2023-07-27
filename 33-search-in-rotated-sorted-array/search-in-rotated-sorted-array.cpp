class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l=0;
        int k=arr.size()-1;
        //int a=arr.size();
        while(l<=k){
            int mid=l+(k-l)/2;
            if(arr[mid]==target) return mid;
             else if(arr[l]<=arr[mid]){
               if(arr[l]<=target and target<=arr[mid]){
                   k=mid-1;
               }
                   else {l=mid+1;
               }
            }
            else{
                if(arr[mid]<=target and target<=arr[k]){
                    l=mid+1;
                }
                else{
                    k=mid-1;
                }
            }
        }
        return -1;
    }
};