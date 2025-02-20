class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) 
    {
        int m=mat.size(),n=mat[0].size();
        int srow=0,scol=0,erow=m-1,ecol=n-1;
        vector<int> a;
        while (srow<=erow && scol<=ecol)
        {
            for (int i=scol;i<=ecol;i++)
                a.push_back(mat[srow][i]);
            for (int i=srow+1;i<=erow;i++)
                a.push_back(mat[i][ecol]);
            for (int i=ecol-1;i>=scol;i--)
            {
                if (srow == erow)
                    break;
                a.push_back(mat[erow][i]);
            }
            for (int i=erow-1;i>=srow+1;i--)
            {
                if (scol == ecol)
                    break;
                a.push_back(mat[i][scol]);
            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return a;
    }
};
