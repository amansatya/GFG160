class Solution {
  public:
    int countTriplets(vector<int> &arr, int t) 
    {
        int n=arr.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                int s=arr[i]+arr[j]+arr[k];
                if(s<t)
                    j++;
                else if(s>t)
                    k--;
                else if(s==t)
                {
                    c++;
                    int t=j+1;
                    while(t<k&&arr[t]==arr[t-1])
                    {
                        t++;
                        c++;
                    }
                    k--;
                }
            }
        }
        return c;
    }
};
