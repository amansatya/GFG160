//cpp
int getMinDiff(vector<int> &arr, int k) 
    {
        sort(arr.begin(),arr.end());
        int n=arr.size(),l=arr[n-1],s=arr[0],ans=l-s;
        for(int i=1;i<n;i++)
        {
            l=max(arr[n-1]-k,arr[i-1]+k);
            s=min(arr[0]+k,arr[i]-k);
            if(s<0)
                continue;
            ans=min(ans,l-s);
        }
        return ans;
    }
