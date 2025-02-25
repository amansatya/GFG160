class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int> ans(n,0),l(n,0); 
        stack<int> s;
        for (int i=0;i<n;i++) 
        {
            while (!s.empty() && arr[s.top()]>=arr[i]) 
            {
                int t=s.top();
                s.pop();
                int si=s.empty()?i:i-s.top()-1;
                l[t]=si;
            }
            s.push(i);
        }
        while (!s.empty()) 
        {
            int t=s.top();
            s.pop();
            int si=s.empty()?n:n-s.top()-1;
            l[t]=si;
        }
        for (int i=0;i<n;i++) 
        {
            int si=l[i]-1;
            ans[si]=max(ans[si],arr[i]);
        }
        for (int i=n-2;i>=0;i--)
            ans[i]=max(ans[i],ans[i + 1]);
        return ans;
    }
};
