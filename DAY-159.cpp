class Solution {
  public:
    int findUnique(vector<int> &arr) 
    {
        int ans=0;
        for(int a:arr)
            ans^=a;
        return ans;
    }
};
