class Solution {
  public:
    void left(vector<int> &arr,vector<int> &l,int &n)
    {
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            while(s.size()>0 && arr[s.top()]>=arr[i])
                s.pop();
            if(s.empty())
                l[i]=-1;
            else
                l[i]=s.top();
            s.push(i);
        }
    }
    void right(vector<int> &arr,vector<int> &r,int &n)
    {
        stack<int> s;
        for(int i=n-1;i>=0;i--)
        {
            while(s.size()>0 && arr[s.top()]>=arr[i])
                s.pop();
            if(s.empty())
                r[i]=n;
            else
                r[i]=s.top();
            s.push(i);
        }
    }
    int getMaxArea(vector<int> &arr) 
    {
        int n=arr.size();
        vector<int> l(n),r(n);
        left(arr,l,n);
        right(arr,r,n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int w=r[i]-l[i]-1;
            int area=arr[i]*w;
            ans=max(ans,area);
        }
        return ans;
    }
};
