class Solution {
  public:
    int maxXor(vector<int> &arr) 
    {
        int ans=0,m=0;
        unordered_set<int> s;
        for (int i=30;i>=0;i--) 
        {
            m|=(1<<i);
            for (auto a:arr)
                s.insert(a&m);
            int c=ans|(1<<i);
            for (int a:s) 
            {
                if (s.count(c^a)) 
                {
                    ans=c;
                    break;
                }
            }
            s.clear();
        }
        return ans;
    }
