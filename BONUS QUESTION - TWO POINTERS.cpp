//QUESTION 1
class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int t) 
    {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                int s=arr[i]+arr[j]+arr[k];
                if(s<t)
                    j++;
                else if(s>t)
                    k--;
                else 
                    return true;
            }
        }
        return false;
    }
};

//QUESTION 2
class Solution {
  public:
    int closest3Sum(vector<int> &arr, int t) 
    {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int ans=0,d=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                int s=arr[i]+arr[j]+arr[k];
                if(abs(s-t)<d)
                {
                    d=abs(s-t);
                    ans=s;
                }
                else if(abs(s-t)==d)
                    ans=max(s,ans);
                if(s>t)
                    k--;
                else
                    j++;
            }
        }
        return ans;
    }
};

//QUESTION 3
class Solution {
  public:
    vector<vector<int> > fourSum(vector<int> &arr, int t) 
    {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            while(i>0&&arr[i]==arr[i-1])
                    i++;
            for(int j=i+1;j<n;j++)
            {
                while(j>i+1&&arr[j]==arr[j-1])
                    j++;
                int k=j+1,l=n-1;
                while(k<l)
                {
                    long long s=(long long)(arr[i]+arr[j]+arr[k]+arr[l]);
                    if(s<t)
                        k++;
                    else if(s>t)
                        l--;
                    else 
                    {
                        ans.push_back({arr[i],arr[j],arr[k],arr[l]});
                        k++;
                        l--;
                        while(k<l&&arr[k]==arr[k-1])
                            k++;
                        while(k<l&&arr[l]==arr[l+1])
                            l--;
                    }
                }
            }
        }
        return ans;
    }
};

//QUESTION 4
class Solution {
  public:
    int atMostK(vector<int> &arr, int k) 
    {
        int i=0,j=0,ans=0;
        unordered_map<int,int> m;
        while(j<arr.size())
        {
            m[arr[j]]++;
            if(m[arr[j]]==1)
                k--;
            while(k<0)
            {
                m[arr[i]]--;
                if(m[arr[i]]==0)
                    k++;
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
};

//QUESTION 5
class Solution {
  public:
    int atmostk(vector<int> &arr, int k)
    {
        int i=0,j=0,ans=0;
        unordered_map<int,int> m;
        while(j<arr.size())
        {
            m[arr[j]]++;
            if(m[arr[j]]==1)
                k--;
            while(k<0)
            {
                m[arr[i]]--;
                if(m[arr[i]]==0)
                    k++;
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
    int exactlyK(vector<int> &arr, int k)
    {
        return atmostk(arr,k)-atmostk(arr,k-1);
    }
};

//QUESTION 6
class Solution {
  public:
    int minRemovals(vector<int> &arr, int k) 
    {
        int n=arr.size(),s=0,p=INT_MIN;
        for(int a:arr)
            s+=a;
        k=s-k;
        if(k==0)
            return n;
        int i=0,j=0,s1=0;
        while(j<n)
        {
            s1+=arr[j];
            while(i<j&&s1>k)
                s1-=arr[i++];
            if(s1==k)
                p=max(p,j-i+1);
            j++;
        }
        return p==INT_MIN?-1:n-p;
    }
};

//QUESTION 7
class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int t) 
    {
        int p;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                p=i;
                break;
            }
        }
        int l=(p+1)%arr.size(),r=p;
        while(l!=r)
        {
            int s=arr[l]+arr[r];
            if(s==t)
                return true;
            else if(s<t)
                l=(l+1)%arr.size();
            else
                r=(r-1+arr.size())%arr.size();
        }
        return false;
    }
};
