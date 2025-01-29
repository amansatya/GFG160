class Solution {
  public:
    double power(double x, int n) 
    {
        if(x==1 || n==0)
            return 1.0;
        else if(x==0)
            return 0.0;
        else if(x==-1)
        {
            if(n%2==0)
                return 1.0;
            return -1.0;
        }
        long int bf=n;
        double ans =1;
        if(n<0)
        {
            x=1/x;
            bf*=-1;
        }
        while(bf>0)
        {
            if(bf%2==1)
                ans*=x;
            x*=x;
            bf/=2;
        }
        return ans;
    }
};
