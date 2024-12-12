class Solution {
  public:
    int countFreq(vector<int>& arr, int target) 
    {
        int s=0,e=arr.size()-1,l=-1,r=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]==target)
            {
                l=mid;
                e=mid-1;
            }
            else if(arr[mid]>target)
                e=mid-1;
            else
                s=mid+1;
        }
        s=0,e=arr.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]==target)
            {
                r=mid;
                s=mid+1;
            }
            else if(arr[mid]>target)
                e=mid-1;
            else
                s=mid+1;
        }
        if(l==-1&&r==-1)
            return 0;
        return r-l+1;
    }
}
