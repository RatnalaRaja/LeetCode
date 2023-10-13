class Solution {
public:
    bool BS (vector<int>& nums , int value)
    {
        int start = 0;
        int end = nums.size()-1;
        int mid = start+(end-start)/2;

        while(start<=end)
        {
            if(nums[mid] == value)
            {
                return true;
            }

            else if(nums[mid] > value)
            {
                end = mid-1;
            }

            else
            {
                start = mid+1;
            }

            mid = start+(end-start)/2;
        }
        return false;
    }

    int arithmeticTriplets(vector<int>& nums, int diff) 
    {
        int count = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(BS(nums , nums[i]+diff) && BS(nums, nums[i]+2*diff))
            {
                count++;
            }
        }

        return count;

    }
};