class Solution {
  public:
    int knapsack(int w, vector<int> &v, vector<int> &wt) 
    {
        vector<int> d(w+1,0);
        for (int i=1;i<=wt.size();i++) 
        {
            for (int j=w;j>=wt[i-1];j--)
                d[j]=max(d[j],d[j-wt[i-1]]+v[i-1]);
        }
        return d[w];
    }
};
