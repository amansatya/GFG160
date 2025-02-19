class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) 
    {
        priority_queue<int> l;
        priority_queue<int,vector<int>,greater<int>> r;
        vector<double> ans;
        for (int i=0;i<arr.size();i++) 
        {
            l.push(arr[i]);
            int t=l.top();
            l.pop();
            r.push(t);
            if (r.size()>l.size()) 
            {
                t=r.top();
                r.pop();
                l.push(t);
            }
            double m;
            if (l.size()!=r.size())
                m=l.top();
            else
                m=(double)(l.top()+r.top())/2;
            ans.push_back(m);
        }
        return ans;
    }
};
