class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int n=height.size();
        int end=height.size()-1;
        int area;
        int marea=0;
        while(start<end){
            area=min(height[start],height[end]) * (end-start);
            if(area>marea) marea=area;
            if( height[start]<height[end]) start++;
            else end--;
        }
        return marea;
    }
};