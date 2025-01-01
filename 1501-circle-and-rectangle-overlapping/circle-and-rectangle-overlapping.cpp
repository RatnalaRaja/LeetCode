class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
         int x_clo = max(x1, min(xCenter, x2));
        int y_clo = max(y1, min(yCenter, y2));
        double distance = sqrt((xCenter - x_clo) * (xCenter - x_clo) + (yCenter - y_clo) * (yCenter - y_clo));
        return distance <= radius;
    }
};