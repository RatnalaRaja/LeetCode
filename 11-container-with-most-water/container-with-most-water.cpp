class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int cuwa=0;
        int maxw=0;
        while(l<r){
            int w=r-l;
            cuwa=w*(min(height[r],height[l]));
            maxw=max(maxw,cuwa);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxw;
    }
};