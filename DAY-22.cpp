int hIndex(vector<int>& citations) 
    {
        int n=citations.size();
        vector<int> a(n+1,0);
        for(int b:citations)
        {
            if(b>=n)
                a[n]++;
            else
                a[b]++;
        }
        int i=0,sum=0;
        for(int j=n;j>=0;j--)
        {
            sum+=a[j];
            if(sum>=j)
            {
                i=j;
                break;
            }
        }
        return i;
    }
