class Solution {
  public:
    int findDuplicate(vector<int>& arr) 
    {
        long long n=arr.size();
        int s=accumulate(arr.begin(),arr.end(),0);
        return s-(((n)*(n-1))/2);
    }
};
