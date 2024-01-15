class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int c = 0;

        for (int i = 0; i < arr1.size(); i++) {
            bool found = false;
            
            for (int j = 0; j < arr2.size(); j++) {
                int k = abs(arr1[i] - arr2[j]);
                
                if (k <= d) {
                    found = true;
                    break; 
                }
            }

            if (!found) {
                c++;
            }
        }

        return c;
    }
};
