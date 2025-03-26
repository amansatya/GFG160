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
