class Solution {
  public:
    bool searchinrow(vector<vector<int>>& mat,int n,int r)
    {
        int c=mat[0].size();
        int s=0,e=c-1;
        while (s<=e)
        {
            int m=s+(e-s)/2;
            if (n==mat[r][m])
                return true;
            else if (n>mat[r][m])
                s=m+1;
            else
                e=m-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>> &mat, int n) 
    {
        int r=mat.size(),c=mat[0].size(),sr=0,er=r-1;
        while (sr<=er)
        {
            int mr=sr+(er-sr)/2;
            if(n>=mat[mr][0] &&n<=mat[mr][c-1])
                return searchinrow(mat,n,mr);
            else if (n>=mat[mr][c-1])
                sr=mr+1;
            else
                er=mr-1;
        }
        return false;
    }
};
