class Solution {
  public:
    bool issafe(vector<vector<int>>& board,int row,int col,int dig)
    {
        for(int i=0;i<9;i++)
        {
            if(board[row][i]==dig)
                return false;
        }
        for(int i=0;i<9;i++)
        {
            if(board[i][col]==dig)
                return false;
        }
        int sr=(row/3)*3,sc=(col/3)*3;
        for(int i=sr;i<=sr+2;i++)
        {
            for(int j=sc;j<=sc+2;j++)
            {
                if(board[i][j]==dig)
                    return false;
            }
        }
        return true;
    }
    bool solver(vector<vector<int>>& board, int row, int col)
    {
        if(row==9)
            return true;
        int nextrow=row, nextcol=col+1;
        if(nextcol==9)
        {
            nextrow=row+1;
            nextcol=0;
        }
        if(board[row][col]!=0)
            return solver(board,nextrow,nextcol);
        for(int i=1;i<=9;i++)
        {
            if(issafe(board,row,col,i))
            {
                board[row][col]=i;
                if(solver(board,nextrow,nextcol))
                    return true;
                board[row][col]=0;
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<int>> &mat) 
    {
        solver(mat,0,0);
    }
};
