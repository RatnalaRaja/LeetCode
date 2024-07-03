class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int m=matrix.size();
        int n=matrix[0].size();

        int total=m*n;

        int startRow=0;
        int endRow=m-1;
        int startCol=0;
        int endCol=n-1;

        int count=0;
        while(count<total)
        { 
      for(int i=startCol;i<=endCol and count<total;i++){
            v.push_back(matrix[startRow][i]);
            count++;
        }
        startRow++;

        for(int i=startRow;i<=endRow  and count<total;i++){
            v.push_back(matrix[i][endCol]);
              count++;
        }
        endCol--;

        for(int i=endCol;i>=startCol  and count<total ;i--){
            v.push_back(matrix[endRow][i]);
              count++;
        }
        endRow--;
        for(int i=endRow;i>=startRow  and count<total ;i--){
            v.push_back(matrix[i][startCol]);
              count++;
        }
        startCol++;

        
        



        }




        return v;
    }
};