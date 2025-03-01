//QUESTION 1
class Solution {
    stack<pair<int,int>> s;
  public:
    Solution() 
    {
    }
    void push(int n) 
    {
        if(s.empty())
            s.push({n,n});
        else
        {
            int m=max(n,s.top().second);
            s.push({n,m});
        }
    }
    void pop() 
    {
        if(!s.empty())
            s.pop();
    }
    int peek() 
    {
        if(s.empty())
            return -1;
        return s.top().first;
    }
    int getMax() 
    {
        if(s.empty())
            return -1;
        return s.top().second;
    }
};

//QUESTION 2
class Solution {
  public:
    int celebrity(vector<vector<int> >& m) 
    {
        int n=m.size();
        stack<int> s;
        for (int i=0;i<n;i++)
            s.push(i);
        while (s.size()>1)
        {
            int i=s.top();
            s.pop();
            int j=s.top();
            s.pop();
            if(m[i][j]==0)
                s.push(i);
            else
                s.push(j);
        }
        int ans=s.top();
        for (int i=0;i<n;i++)
        {
            if(i!=ans && (m[i][ans]==0 || m[ans][i]==1))
                return -1;
        }
        return ans;
    }
};

//QUESTION 3
class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) 
    {
        int n=arr.size();
        vector<int> ans(n,-1);
        stack<int> s;
        for(int i=(2*n)-1;i>=0;i--)
        {
            while(s.size()>0 && s.top()<=arr[i%n])
                s.pop();
            if(!s.empty())
                ans[i%n]=s.top();
            s.push(arr[i%n]);
        }
        return ans;
    }
};

//QUESTION 4
class Solution {
  public:
    int sumOfMax(vector<int> &arr) 
    {
        int n=arr.size(),ans=0;
        stack<int> s;
        vector<int> l(n),r(n);
        for (int i = 0; i < n; ++i) 
        {
            while (!s.empty() && arr[s.top()]<arr[i])
                s.pop();
            if(s.empty())
                l[i]=i+1;
            else
                l[i]=i-s.top();
            s.push(i);
        }
        while (!s.empty())
            s.pop();
        for (int i=n-1;i>=0;i--) 
        {
            while (!s.empty() && arr[s.top()]<=arr[i])
                s.pop();
            if(s.empty())
                r[i]=n-i;
            else
                r[i]=s.top()-i;
            s.push(i);
        }
        for (int i=0;i<n;i++)
            ans+=arr[i]*l[i]*r[i];
        return ans;
    }
};
