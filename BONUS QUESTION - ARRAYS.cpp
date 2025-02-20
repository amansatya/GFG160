//QUESTION 1
class Solution {
  public:
    vector<int> findSplit(vector<int>& arr) 
    {
        int s=0;
        vector<int> r;
        for(int a:arr)
            s+=a;
        if(s%3!=0)
        {
            r={-1,-1};
            return r;
        }
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            c+=arr[i];
            if(c==s/3)
            {
                r.push_back(i);
                c=0;
            }   
            if(r.size()==2 && i<arr.size())
                return r;
        }
        r={-1,-1};
        return r;
    }
};

//QUESTION 2
class Solution {
  public:
    int singleDigit(int n) 
    {
        int s=0;
        while(n!=0||s>9)
        {
            if(n==0)
            {
                n=s;
                s=0;
            }
            s+=n%10;
            n=n/10;
        }
        return s;
        
    }
};

//QUESTION 3
class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) 
    {
        int st=0,end=0,c=0,ans=0;
        while(end<arr.size())
        {
            if(arr[end]==0)
                c++;
            while(c>k)
            {
                if(arr[st]==0)
                    c--;
                st++;
            }
            ans=max(ans,(end-st)+1);
            end++;
        }
        return ans;
    }
};

//QUESTION 4
class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) 
    {
        int r=INT_MIN;
        for(int a:left)
            r=max(r,a);
        for(int a:right)
            r=max(r,n-a);
        return r;
    }
};
