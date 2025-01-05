class Solution {
  public:
    int countPairs(vector<int> &arr, int t) 
    {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int c=0,i=0,j=n-1;
        while(i<j)
        {
            int s=arr[i]+arr[j];
            if(s<t)
            {
                c+=j-i;
                i++;
            }
            else 
                j--;
        }
        return c;
    }
};
