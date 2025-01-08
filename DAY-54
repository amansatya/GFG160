class Solution {
  public:
    int countPairs(vector<int> &arr, int t) 
    {
        int n=arr.size(),i=0,j=n-1,c=0;
        while(i<j)
        {
            int s=arr[i]+arr[j];
            if(s<t)
                i++;
            else if(s>t)
                j--;
            else 
            {
                int c1=0,c2=0,e1=arr[i],e2=arr[j];
                while(i<=j&&arr[i]==e1)
                {
                    c1++;
                    i++;
                }
                while(i<=j&&arr[j]==e2)
                {
                    j--;
                    c2++;
                }
                if(e1==e2)
                    c+=(c1*(c1-1))/2;
                else
                    c+=c1*c2;
            }
        }
        return c;
    }
};
