//QUESTION 1
class Solution {
  public:
    int minCandy(vector<int> &arr) 
    {
        int n=arr.size(),ans=0;
        if (n==0)
            return 0;
        vector<int> l(n,1),r(n,1);
        for (int i=1;i<n;i++)
        {
            if (arr[i]>arr[i-1])
                l[i]=l[i-1]+1;
        }
        for (int i=n-2;i>=0;i--)
        {
            if (arr[i]>arr[i+1])
                r[i]=r[i+1]+1;
        }
        for (int i=0;i<n;i++)
            ans+=max(l[i],r[i]);
        return ans;
    }
};

//QUESTION 2
class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) 
    {
        int n=arr.size(),i=0,j=0,ans=0;
        while (i<n && j<n) 
        {
            while (i<n && arr[i]!='P') 
                i++;
            while (j<n && arr[j]!='T') 
                j++;
            if (i<n && j<n && abs(i-j)<=k) 
            {
                ans++; 
                i++; 
                j++; 
            } 
            else if (j<n && j<i)
                j++;
            else if (i<n && i<j)
                i++;
        }
        return ans;
    }
};

//QUESTION 3
class Solution {
  public:
    string largestSwap(string &s) 
    {
        char md='0';
        int mi=-1,l=-1,r=-1;
        for (int i=s.size()-1;i>=0;i--)
        {
            if (s[i]>md)
            {
                md=s[i];
                mi=i;
                continue;
            }
            if (s[i]<md)
            {
                l=i;
                r=mi;
            }
        }
        if (l==-1)
            return s;
        swap(s[l],s[r]);
        return s;
    }
};

//QUESTION 4
class Solution {
  public:
    int minCost(vector<int>& arr) 
    {
        priority_queue<int,vector<int>,greater<int>> pq(arr.begin(),arr.end());
        int ans=0;
        while (pq.size()>1) 
        {
            int f=pq.top();
            pq.pop();
            int s=pq.top();
            pq.pop();
            ans+=f+s;
            pq.push(f+s);
        }
        return ans;
    }
};
