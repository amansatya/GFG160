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
            int m=min(n,s.top().second);
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
    int getMin() 
    {
        if(s.empty())
            return -1;
        return s.top().second;
    }
};
