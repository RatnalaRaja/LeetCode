class Solution {
public:

    int maxi = 0;

    bool isUnique(string s){

        set<char> st;
        
        for(auto x : s){
            st.insert(x);
        }

        if(s.size() == st.size()){
            return true;
        }
        
        return false;
    }

    void solve(vector<string>& arr, int i, int n, string temp){

        
        if(isUnique(temp) == false){
            return;
        }

   
        if(i >= n){

            
            int currSize = temp.size();
            maxi = max(maxi, currSize);

            return;
        }

     
        solve(arr, i+1, n, temp + arr[i]);

        
        solve(arr, i+1, n, temp);
    }

    int maxLength(vector<string>& arr) {
        
        int n = arr.size();
        solve(arr, 0, n, ""); 

        return maxi;
    }
};