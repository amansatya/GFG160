//cpp
int l=1,r=1,maxp=INT_MIN,n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(l==0)
                l=1;
            if(r==0)
                r=1;
            l*=arr[i];
            r*=arr[n-i-1];
            int m=max(l,r);
            maxp=max(maxp,m);
        }
        return maxp;
