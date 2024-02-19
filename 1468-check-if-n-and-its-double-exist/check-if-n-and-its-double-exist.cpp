class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            v.push_back(2*arr[i]);
        }
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<v.size();j++){
                if(arr[i]==v[j] && i!=j)return true;
            }
        }
        return false;
    }
};