class Solution {
  public:
    bool issafe(vector<int> &board,int col,int n,int row)
    {
        for(int i=0;i<col;i++)
        {
            if(board[i]==row+1)
                return false;
        }
        for(int i=col-1,j=row-1;i>=0&&j>=0;i--,j--)
        {
            if(board[i]==j+1)
                return false;
        }
        for(int i=col-1,j=row+1;i>=0&&j<n;i--,j++)
        {
            if(board[i]==j+1)
                return false;
        }
        return true;
    }
    void nqueens(vector<int>&board, int n, int col,vector<vector<int>>&ans)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(issafe(board,col,n,i))
            {
                board[col]=i+1;
                nqueens(board,n,col+1,ans);
            }
        }
    }
    vector<vector<int>> nQueen(int n) 
    {
        vector<int> board(n,0);
        vector<vector<int>> ans;   
        nqueens(board,n,0,ans); 
        return ans;
    }
};
