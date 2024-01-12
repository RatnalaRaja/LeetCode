class Solution {
public:
    int binarysearch(vector<int>& arr) {
        int i = 0, j = arr.size() - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (arr[mid] < 0) {
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return arr.size() - i;
    }

    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (auto& row : grid) {
            count += binarysearch(row);
        }
        return count;
    }
};
