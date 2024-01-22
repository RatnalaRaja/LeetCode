class Solution {
public:
    void merge(vector<int>& v, vector<int>& temp, int mid, int start, int end) {
        if (start >= end) return;
        int i = start, j = mid + 1;
        int k = start;

        while (i <= mid && j <= end) {
            if (v[i] <= v[j]) {
                temp[k++] = v[i++];
            } else {
                temp[k++] = v[j++];
            }
        }

        while (i <= mid) {
            temp[k++] = v[i++];
        }

        while (j <= end) {
            temp[k++] = v[j++];
        }

        for (int x = start; x <= end; x++) {
            v[x] = temp[x];
        }
    }

    void mergesort(vector<int>& v, vector<int>& temp, int start, int end) {
        if (start < end) {
            int mid = start + (end - start) / 2;
            mergesort(v, temp, start, mid);
            mergesort(v, temp, mid + 1, end);
            merge(v, temp, mid, start, end);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        vector<int> copy(nums.size(), 0);
        mergesort(nums, copy, 0, nums.size() - 1);
        return nums;
    }
};
