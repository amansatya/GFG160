class Solution {
  public:
    void floydWarshall(vector<vector<int>> &d) 
    {
        int v=d.size();
        for (int i=0;i<v;i++) 
        {
            for (int j=0;j<v;j++) 
            {
                for (int k=0;k<v;k++)
                    d[j][k]=min(d[j][k],d[j][i]+d[i][k]);
            }
        }
    }
};
