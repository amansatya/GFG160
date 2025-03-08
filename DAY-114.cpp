class Solution {
  public:
    string longestPalindrome(string &s) 
    {
        int n=s.size();
        int i=0,len=1;
        for (int j=0;j<n;j++) 
        {
            for (int k=0;k<=1;k++) 
            {
                int l=j,h=j+k; 
                while (l>=0 && h<n && s[l]==s[h]) 
                {
                    int c=h-l+1;
                    if (c>len)
                    {
                        i=l;
                        len=c;
                    }
                    l--;
                    h++;
                }
            }
        }
        return s.substr(i,len);
    }
};
