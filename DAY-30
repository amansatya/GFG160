class Solution {
  public:
    int search(vector<int>& a, int x) 
    {
        int st=0,end=a.size()-1,mid;
        while (st<=end)
        {
            mid=(st+end)/2;
            if (a[mid]==x)
                return mid;
            if (a[st]<=a[mid])
            {
                if (a[st]<=x && a[mid]>=x)
                    end=mid-1;
                else
                    st=mid+1;
            }
            else
            {
                if (a[mid] <= x && a[end] >= x)
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }
};
