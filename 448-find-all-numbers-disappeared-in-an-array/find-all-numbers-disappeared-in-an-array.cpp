class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
          int n = nums.size();
            set<int> s;
            vector<int> v, v1;

        for (int i = 1; i <= n; i++) {
            v.push_back(i);
        }

        sort(v.begin(), v.end());
        
        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }

        for (int i = 0; i < n; i++) {
            if (s.find(v[i]) == s.end()) {
                v1.push_back(v[i]);
            }
        }

        return v1;
    }
};