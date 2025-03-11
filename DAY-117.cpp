class Solution {
  public:
    int countWays(int n) 
    {
        int p=1,q=1;
        for(int i=2;i<=n;i++)
        {
            int c=p+q;
            q=p;
            p=c;
        }
        return p;
    }
};
