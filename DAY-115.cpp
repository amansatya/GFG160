class Solution {
  public:
    int countPS(string &s) 
    {
        int n=s.size(),ans=0;
        vector<vector<bool>> d(n,vector<bool>(n,false));
        for (int i=0;i<n;i++)
            d[i][i]=true;
        for (int i=0;i<n-1;i++) 
        {
            if (s[i]==s[i+1]) 
            {
                d[i][i+1]=true;
                ans++;
            }
        } 
        for (int i=2;i<n;i++) 
        {
            for (int j=0;j<n-i;j++) 
            {
                int k=i+j;
                if (s[j]==s[k] && d[j+1][k-1]) 
                {
                    d[j][k]=true;
                    ans++;
                }
            }
        }
        return ans;
    }
};
