class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) 
    {
        int x=0;
        for (auto i:arr)
            x=i^x;
        x&=-x;
        vector<int> ans(2,0);
        for (int i:arr) 
        {
            if ((i&x)==0) 
                ans[0]^=i;
            else
                ans[1]^=i;
        }
        if (ans[0]>ans[1])
            swap(ans[0],ans[1]);
        return ans;
    }
};
