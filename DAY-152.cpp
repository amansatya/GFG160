class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges,int s)
    {
        vector<int> ans(V,1e8);
	    ans[s]=0;
	    for (int i=0;i<V;i++) 
	    {
	    	for (vector<int> e:edges) 
	    	{
	    		int j=e[0],k=e[1],w=e[2];
	    		if (ans[j]!=1e8 && ans[j]+w<ans[k]) 
	    		{
                    if(i==V-1)
                        return {-1};
                    ans[k]=ans[j]+w;
                }
	    	}
	    }
        return ans;
    }
};
