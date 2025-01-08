class Solution {
  public:
    int countTriangles(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int c=0;
        for(int i=2;i<arr.size();i++)
        {
            int j=0,k=i-1;
            while(j<k)
            {
                if(arr[j]+arr[k]>arr[i])
                {    
                    c+=k-j;
                    k--;
                }
                else
                    j++;
            }
        }
        return c++;
    }
};
