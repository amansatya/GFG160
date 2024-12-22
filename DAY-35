class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) 
    {
        int i=0,j=arr.size()-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            int m=arr[mid]-mid-1;
            if(m<k)
                i=mid+1;
            else
                j=mid-1;
        }
        return i+k;
    }
};
