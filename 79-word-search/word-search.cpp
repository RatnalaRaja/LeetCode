class Solution {
public:
    int m,n;
    vector<vector<int>>directions={{1,0},{-1,0},{0,-1},{0,1}};
    bool search(vector<vector<char>>& board, string &word,int i,int j,int ind){
        if(ind==word.size()){
            return true;
        }
        if(i<0 || j<0 || i>=m || j>=n||board[i][j]!=word[ind]){
            return false;
        }
        char temp=board[i][j];
        board[i][j]='#';
        for(auto &dir:directions){
            int newi=i+dir[0];
            int newj=j+dir[1];
           if (search(board,word,newi,newj,ind+1))
            return true;
        }
        board[i][j]=temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                    if(search(board,word,i,j,0))
                    return true;
            }
        }
        return false;
    }
};