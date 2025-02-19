//QUESTION 1
class Solution {
  public:
    vector<int> topKFrequent(vector<int> &arr, int k) 
    {
        unordered_map<int,int> m;
        for (int a:arr)
            m[a]++;
        priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>> p;
        for (auto &a:m) 
        {
            p.push({a.second,a.first});
            if (p.size() > k)
                p.pop();
        }
        vector<int> ans(k);
        for (int i=k-1;i>=0;i--) 
        {
            ans[i]=p.top().second;
            p.pop();
        }
        return ans;
    }
};

//QUESTION 2
class Solution {
  public:
    int minMeetingRooms(vector<int> &arr1,vector<int> &arr2) 
    {
        int n=arr1.size(),ans=0,m=0,i=0,j=0;
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        while (i<arr1.size()) 
        {
            if (arr1[i]<arr2[j]) 
            {
                m++;
                i++;
            }
            else 
            {
                m--;
                j++;
            }
            ans=max(ans,m);
        }
        return ans;
    }
};

//QUESTION 3
class Solution {
  public:
    int mostBooked(int n,vector<vector<int>> &arr) 
    {
        vector<int> a(n,0);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p1;
        priority_queue<int,vector<int>,greater<int>> p2;
        for (int i=0;i<n;i++)
            p2.push(i);
        sort(arr.begin(),arr.end());
        for (auto &b:arr) 
        {
            int i=b[0],j=b[1];
            while (!p1.empty() && p1.top().first<=i) 
            {
                p2.push(p1.top().second);
                p1.pop();
            }
            if (!p2.empty()) 
            {
                int x=p2.top();
                p2.pop();
                p1.push({j,x});
                a[x]++;
            }
            else 
            {
                int x=p1.top().first;
                int y=p1.top().second;
                p1.pop();
                p1.push({x+(j-i),y});
                a[y]++;
            }
        }
        int m=0,ans=0;
        for (int i=0;i<n;i++) 
        {
            if (a[i]>m) 
            {
                m=a[i];
                ans=i;
            }
        }
        return ans;
    }
};

//QUESTION 4
class Solution {
  public:
    string rearrangeString(string s) 
    {
        int n=s.size();
        unordered_map<char,int> m;
        for (int i=0;i<n;i++)
            m[s[i]]++;
        priority_queue<pair<int,char>> p;
        for (char a='a';a<='z';a++) 
        {
            if (m[a]>0)
                p.push({m[a],a});
        }
        string ans="";
        pair<int,char> b={-1,'#'};
        while (!p.empty()) 
        {
            pair<int,char> q=p.top();
            p.pop();
            ans.push_back(q.second);
            if (b.first>0)
                p.push(b);
            q.first--;
            b=q;
        }
        if (ans.size()!=n)
            return "";
        return ans;
    }
};

//QUESTION 5
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) 
    {
        priority_queue<int,vector<int>,greater<int>> p;
        for (int i=0;i<k;i++)
            p.push(arr[i]);
        int i;
        for (i=k;i<arr.size();i++) 
        {
            p.push(arr[i]);
            arr[i-k]=p.top();
            p.pop();
        }
        while (!p.empty()) 
        {
            arr[i-k]=p.top();
            p.pop();
            i++;
        }
    }
};
