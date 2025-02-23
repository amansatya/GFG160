class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) 
    {
        vector<int> ans(arr.size());
        stack<int> s;
        for(int i=0;i<arr.size();i++)
        {
            while(s.size()>0 && arr[s.top()]<=arr[i])
                s.pop();
            if(s.size()==0)
                ans[i]=i+1;
            else
                ans[i]=i-s.top();
            s.push(i);
        }
        return ans;
    }
};
