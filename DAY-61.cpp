class Solution {
  public:
    int findEquilibrium(vector<int> &arr) 
    {
        int s=0;
        for(int a:arr)
            s+=a;
        int p=0;
        for(int i=0;i<arr.size();i++)
        {
            int su=s-p-arr[i];
            if(p==su)
                return i;
            p+=arr[i];
        }
        return -1;
    }
};
