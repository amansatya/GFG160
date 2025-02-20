class Solution {
  public:
    bool present(vector<int> &arr,int x)
    {
        int i=0,j=arr.size()-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(arr[mid]==x)
                return true;
            else if(arr[mid]>x)
                j=mid-1;
            else    
                i=mid+1;
        }
        return false;
    }
    bool searchRowMatrix(vector<vector<int>> &arr, int x) 
    {
        for(int i=0;i<arr.size();i++)
        {
            if(present(arr[i],x))
                return true;
        }
        return false;
    }
};
