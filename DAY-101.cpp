class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int> ans(n,-1);
        stack<int> s;
        for(int i=n-1;i>=0;i--)
        {
            while(s.size()>0 && arr[i]>=s.top())
                s.pop();
            if(!s.empty())
                ans[i]=s.top();
            s.push(arr[i]);
        }
        return ans;
    }
};
