class Solution {
public:
    bool isvalid(int n,vector<string>&queen,int col,int row){
         for (int c = 0; c < col; c++) {
            if (queen[row][c] == 'Q')
                return false;
        }
        for(int i=row,j=col;i>=0 and j>=0 ;i--,j--){
            if(queen[i][j]=='Q')return false;
        }
        for(int i=row,j=col;i<n and j>=0;i++,j--){
            if(queen[i][j]=='Q')return false;
        }
        return true;
    }

    void Queen(int n,vector<vector<string>>&board,vector<string>&str,int col){
        if(col==n){
            board.push_back(str);
            return;
        }
        for(int row=0;row<n;row++){
            if(isvalid(n,str,col,row)){
                str[row][col]='Q';
                Queen(n,board,str,col+1);
                str[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>board;
        vector<string>str(n,string(n,'.'));
        Queen(n,board,str,0);
        return board;
    }
};