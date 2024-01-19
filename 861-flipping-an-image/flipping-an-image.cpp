class Solution {
public:
    std::vector<std::vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size(); 
       
        for (int i = 0; i < n; i++) {
            
            for (int j = 0; j < image[i].size(); j++) {
                image[i][j] = 1 - image[i][j]; 
            }
            
            reverse(image[i].begin(), image[i].end());
        }

        return image;
    }
};