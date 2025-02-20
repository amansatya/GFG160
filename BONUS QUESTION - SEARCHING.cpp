//QUESTION 1
class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) 
    {
        int lo = 0, hi = arr.size() - 1,res=arr.size();
  	    while(lo <= hi) 
  	    {
      	    int mid = lo + (hi - lo)/2;
      	    if(arr[mid] >= target) 
      	    {
                res = mid;
                hi = mid - 1;
            }
      	    else
                lo = mid + 1;
        }
  	    return res;	
    }
};

//QUESTION 2
class Solution {
  public:
    int findMaximum(vector<int> &arr) 
    {
        int n=arr.size();
        if(arr[0]>arr[1])
            return arr[0];
        if(arr[n-1]>arr[n-2])
            return arr[n-1];
        int st=1,end=n-2;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1])
                return arr[mid];
            else if(arr[mid-1]<arr[mid])
                st=mid+1;
            else
                end=mid-1;
        }
        return -1;
    }
};

//QUESTION 3
class Solution {
  public:
    double medianOf2(vector<int>& arr1, vector<int>& arr2) 
    {
        if(arr1.size()>arr2.size())
            return medianOf2(arr2,arr1);
        int n=arr1.size(),m=arr2.size(),i=0,j=n;
        while(i<=j)
        {
            int x=(i+j)/2,y=(m+n+1)/2-x;
            int a=(x==0)?INT_MIN:arr1[x-1];
            int b=(x==n)?INT_MAX:arr1[x];
            int c=(y==0)?INT_MIN:arr2[y-1];
            int d=(y==m)?INT_MAX:arr2[y];
            if(a<=d&&c<=b)
            {
                if((m+n)%2==0)
                    return (max(a,c)+min(b,d))/2.0;
                else
                    return max(a,c);
            }
            else if(a>d)
                j=x-1;
            else
                i=x+1;
        }
        return 0.0;
    }
};

//QUESTION 4
class Solution {
  public:
    int floorSqrt(int x) 
    {
        if(x==0)
            return 0;
        else if(x==1)
            return 1;
        else
        {
            int s=1,e=x;
            while(s<=e)
            {
                int mid=s+(e-s)/2;
                long long square=(long long)mid*mid;
                if(square>x)
                    e=mid-1;
                else if(square<x)
                    s=mid+1;
                else
                    return mid;
            }
            return e;
        }
    }
};

//QUESTION 5
class Solution {
  public:
    bool check(vector<int>& arr, int mid, int k) 
    {
        int hours = 0;
        for (int i = 0; i < arr.size(); i++) 
        {
            hours += arr[i] / mid;
            if (arr[i] % mid != 0)
                hours++;
        }
        return hours <= k;
    }
    int kokoEat(vector<int>& arr, int k) 
    {
        int i=1,j=*max_element(arr.begin(), arr.end()),ans=j;
        while(i<=j)
        {
            int mid = i + (j - i) / 2;
            if (check(arr, mid, k) == true) 
            {
                j = mid - 1;
                ans = mid;
            }
            else
                i = mid + 1;
        }
        return ans;
    }
};


//QUESTION 6
class Solution {
  public:
    bool check(vector<int> &arr, int k, int m, int days) 
    {
        int c=0,b=0;
        for (int a : arr) 
        {
            if (a <= days) 
            {
                c++;
                if (c == k) 
                {
                    b++;
                    c=0;
                }
            } 
            else
                c=0;
        }
        return b>=m;
    }
    int minDaysBloom(int m, int k, vector<int> &arr) 
    {
        int lo = 0;
  	    int hi = *max_element(arr.begin(), arr.end());
        int res = -1;
        while (lo <= hi) 
        {
            int mid = (lo + hi) / 2;
            if (check(arr, k, m, mid)) 
            {
                res = mid;
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }
        return res;
    }
};
