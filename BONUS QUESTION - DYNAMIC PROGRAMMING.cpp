//QUESTION 1
class Solution {
  public:
    int subseqCount(string &txt, string &pat) 
    {
        int m=pat.size(),n=txt.size();
        if (m>n)
            return 0;
        vector<int> p(m+1,0),c(m+1,0);
        p[0]=1;
        for (int i=1;i<=n;i++)
        {
            c[0]=1;
            for (int j=1;j<=m;j++)
            {
                if (txt[i-1]==pat[j-1])
                    c[j]=(p[j-1]+p[j]);
                else
                    c[j]=p[j];
            }
            p=c;
        }
        return p[m];
    }
};

//QUESTION 2
class Solution {
  public:
    vector<string> wordBreak(vector<string>& dict, string& s) 
    {
        unordered_set<string> st(dict.begin(),dict.end());
        int n=s.size();
        vector<vector<string>> dp(n+1);
        dp[n]={""};
        for (int i=n-1;i>=0;i--)
        {
            for (int j=i+1;j<=n;j++)
            {
                string a=s.substr(i,j-i);
                if (st.count(a))
                {
                    for (string &b:dp[j])
                    {
                        if (b.empty())
                            dp[i].push_back(a);
                        else
                            dp[i].push_back(a+" "+b);
                    }
                }
            }
        }
        return dp[0];
    }
};

//QUESTION 3
class Solution {
  public:
    int uglyNumber(int n) 
    {
        vector<int> arr(n);
        int i2=0,i3=0,i5=0,mt=2,mth=3,mf=5,next=1;
        arr[0] = 1;
        for (int i=1;i<n;i++)
        {
            next=min({mt,mth,mf});
            arr[i]=next;
            if (next==mt)
            {
                i2++;
                mt=arr[i2]*2;
            }
            if (next==mth)
            {
                i3++;
                mth=arr[i3]*3;
            }
            if (next==mf)
            {
                i5++;
                mf=arr[i5]*5;
            }
        }
        return next;
    }
};

//QUESTION 4
class Solution {
  public:
    bool isInterleave(string& s1, string& s2, string& s3) 
    {
        if (s1.size()+s2.size()!=s3.size()) 
            return false;   
        int n=s1.size(),m=s2.size();
        vector<bool> p(m+1),c(m+1);
        p[0]=true;
        for (int i=1;i<=m;i++)
            p[i]=(s2[i-1]==s3[i-1]) && p[i-1];
        for (int i=1;i<=n;i++) 
        {
            c[0]=(s1[i-1]==s3[i-1]) && p[0];
            for (int j=1;j<=m;j++) 
            {
                int k=i+j;
                c[j]=(s1[i-1]==s3[k-1] && p[j]) || (s2[j-1]==s3[k-1] && c[j-1]);
            }
            p=c;
        }
        return c[m];
    }
};

//QUESTION 5
class Solution {
  public:
    int maxSkill(vector<int> &arr) 
    {
        int n=arr.size();
        arr.insert(arr.begin(), 1);
        arr.push_back(1);
        vector<vector<int>> dp(n+2,vector<int>(n+2,0));
        for (int i=1;i<=n;i++) 
        {
            for (int j=1;j<=n-i+1;j++) 
            {
                int k=j+i-1;
                for (int l=j;l<=k;l++) 
                {
                    int s=arr[j-1]*arr[l]*arr[k+1];
                    int ts=s+dp[j][l-1]+dp[l+1][k];
                    dp[j][k]=max(dp[j][k],ts);
                }
            }
        }
        return dp[1][n];
    }
};

//QUESTION 6
class Solution {
  public:
    int maxProfit(vector<int>& arr, int k) 
    {
        int n=arr.size();
        int ns=0,ih=0;
        if (n==0) 
            return 0; 
        for (int i=n-1;i>=0;i--) 
        {
            int nonew,newi;
            nonew=max(ns,ih-arr[i]);
            newi=max(ih,arr[i]-k+ns);
            ns=nonew;
            ih=newi;
        }
        return ns;
    }
};

//QUESTION 7
class Solution {
    void generatePal(string& s, vector<vector<bool>>& p) 
    {
        int n=s.size();
        for (int i=0;i<n;i++)
            p[i][i]=true;
        for (int i=2;i<=n;i++) 
        {
            for (int j=0,k=j+i-1;k<n;j++,k++) 
            {
                if (s[j]==s[k] && (i==2 || p[j+1][k-1]))
                    p[j][k]=true;
            }
        }
    }
  public:
    int palPartition(string &s) 
    {
        int n=s.size();
        vector<vector<bool>> p(n,vector<bool>(n,false));
        generatePal(s,p);
        vector<int> dp(n, n);
        dp[0] = 0;
        for (int i=1;i<n;i++) 
        {
            if (p[0][i])
                dp[i] = 0;
            else 
            {
                for (int j=i;j>=1;j--) 
                {
                    if (p[j][i])
                      	dp[i]=min(dp[i],1+dp[j-1]);
                }
            }
        }
        return dp[n - 1];
    }
};

//QUESTION 8
class Solution {
  public:
    int eggDrop(int n, int k) 
    {
        vector<vector<int>> dp(k+1,vector<int>(n+1,0));
        int c=0;
        while (dp[c][n]<k) 
        {
            c++;
            for (int i=1;i<=n;i++) 
                dp[c][i]=1+dp[c-1][i-1]+dp[c-1][i];
        }
        return c;
    }
};
