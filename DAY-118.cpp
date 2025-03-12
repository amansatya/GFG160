class Solution {
  public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();
        if (n==1)  
            return cost[0];
        int p2=cost[0],p1=cost[1];
        for (int i=2;i<n;i++) 
        {
            int c=cost[i]+min(p1,p2);
            p2=p1;
            p1=c;
        }
        return min(p1,p2);
    }
};
