class Solution {
  public:
    bool dfs(vector<vector<char>>& mat, string& word,int i,int j,int z,vector<vector<bool>>& v)
    {
        if(z==word.size())
            return true;
        int n=mat.size(),m=mat[0].size();
        if (i<0 || j<0 || i>=n || j>=m || mat[i][j]!=word[z] || v[i][j])
            return false;
        v[i][j]=true;
        bool b1=dfs(mat,word,i+1,j,z+1,v);
        bool b2=dfs(mat,word,i-1,j,z+1,v);
        bool b3=dfs(mat,word,i,j+1,z+1,v);
        bool b4=dfs(mat,word,i,j-1,z+1,v);
        bool b=b1 || b2 || b3 || b4;
        v[i][j]=false;
        return b;
    }
    bool isWordExist(vector<vector<char>>& mat, string& word) 
    {
        int n=mat.size(),m=mat[0].size();
        vector<vector<bool>> v(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==word[0]&&dfs(mat,word,i,j,0,v))
                    return true;
            }
        }
        return false;
    }
};
