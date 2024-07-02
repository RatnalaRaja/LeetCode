class Solution {
public:
    int findKthPositive(std::vector<int>& arr, int k) {
        vector<int> missingNumbers;
        int expectedNumber = 1;
        
        for (int num : arr) {
            while (expectedNumber < num) {
                missingNumbers.push_back(expectedNumber);
                expectedNumber++;
            }
            expectedNumber++;
        }
        while (missingNumbers.size() < k) {
            missingNumbers.push_back(expectedNumber++);
        }
        
        return missingNumbers[k - 1];
    }
};
