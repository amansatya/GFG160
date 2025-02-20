//cpp
vector<int> findMajority(vector<int>& a) 
    {
        int n=a.size();
        int c1=0,c2=0,ans1,ans2;
        for (int i=0;i<n;i++)
        {
            if (c1==0)
                ans1=a[i];
            else if (c2==0)
                ans2=a[i];
            if (ans1==a[i])
                c1++;
            else if (ans2==a[i])
                c2++;
            else
            {
                c1--;
                c2--;
            }
        }
        int m1=0,m2=0;
        for (int i=0;i<n;i++)
        {   
            if (ans1==a[i])
                m1++;
            else if (ans2==a[i])
                m2++;
        }
        int i=0;
        vector<int> r;
        if (m1>(n/3))
            r.push_back(ans1);
        if (m2>(n/3))
            r.push_back(ans2);
        sort(r.begin(),r.end());
        return r;
    }
