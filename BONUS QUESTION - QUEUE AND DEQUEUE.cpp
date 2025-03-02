//QUESTION 1
class Solution {
  public:
    int kBitFlips(vector<int>& arr, int k) 
    {
        int n=arr.size(),c=0;
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(!q.empty() && q.front()<=i)
                q.pop();
            int e=arr[i];
            if(q.size()%2==1)
                e=1-e;
            if(e==0)
            {
                if(i+k>n)
                    return -1;
                q.push(i+k);
                c++;
            }
        }
        return c;
    }
};


//QUESTION 2
class Solution {
  public:
    int getScore(vector<int>& arr, int k) 
    {
        int n = arr.size();
        vector<int> d(n,INT_MIN);
        d[n-1]=arr[n-1];
        deque<int> dq;
        dq.push_back(n-1);
        for (int i=n-2;i>=0;i--)
        {
            while (!dq.empty() && dq.front()>i+k)
                dq.pop_front();
            d[i]=arr[i]+d[dq.front()];
            while (!dq.empty() && d[i]>=d[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        return d[0];
    }
};
