class Solution {
  public:
    int missingNum(vector<int>& arr) 
    {
        int s=accumulate(arr.begin(),arr.end(),0);
        int n=arr.size()+1;
        long long s1=(n*1LL*(n+1))/2;
        return s1-s;
    }
};
