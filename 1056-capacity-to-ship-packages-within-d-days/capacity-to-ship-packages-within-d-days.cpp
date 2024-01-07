class Solution {
public:
    int shipWithinDays(vector<int>& weights, int d) {
           auto feasible = [&](int capacity) {
            int days = 1;
            int total = 0;
            for (int weight : weights) {
                total += weight;
                if (total > capacity) {
                    total = weight;
                    days += 1;
                    if (days > d) {
                        return false;
                    }
                }
            }
            return true;
        };

        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (feasible(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};