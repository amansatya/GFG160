class Solution {
  public:
    int longestPalinSubseq(string &s) 
    {
        int n=s.size();
        vector<int> m1(n),m2(n);
        for (int i=n-1;i>=0;i--)
        {
            m1[i]=1;
            for (int j=i+1;j<n;j++)
            {
                if (s[i]==s[j])
                    m1[j]=m2[j-1]+2;
                else
                    m1[j]=max(m2[j],m1[j-1]);
            }
            m2=m1;
        }
        return m1[n-1];
    }
};
