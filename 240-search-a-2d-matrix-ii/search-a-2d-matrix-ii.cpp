class Solution {
private:
    bool binary(vector<int>&v,int k){
        int s=0,n=v.size(),e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(v[mid]==k) return true;
            else if(v[mid]<k) s=mid+1;
            else e=mid-1;
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0) return false;
        for(int i=0;i<matrix.size();i++){
            if(binary(matrix[i],target)) return true;
        }
        return false;
    }
};