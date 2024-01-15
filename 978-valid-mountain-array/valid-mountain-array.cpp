class Solution {
public:
    bool validMountainArray(std::vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return false;

        int peakIndex = -1;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                peakIndex = i;
                break;
            }
        }

        if (peakIndex == -1 || peakIndex == 0 || peakIndex == n - 1) {
            return false;  
        }

        for (int i = 0; i < peakIndex; i++) {
            if (arr[i] >= arr[i + 1]) {
                return false; 
            }
        }

        for (int i = peakIndex + 1; i < n - 1; i++) {
            if (arr[i] <= arr[i + 1]) {
                return false;  
            }
        }

        return true;
    }
};
