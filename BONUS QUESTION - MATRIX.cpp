//QUESTION 1
class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) 
    {
        int n=mat.size();
        for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<n;j++)
            {
                swap(mat[i][j],mat[n-i-1][j]);
            }
        }
        for(int i=0;i<n;i++)
            reverse(mat[i].begin(),mat[i].end());
    }
};

//QUESTION 2
class Solution {
  public:
    vector<vector<int>> spiralFill(int n, int m, vector<int> &arr) 
    {
        vector<vector<int>> ans(n,vector<int>(m,0));
        int t=0,l=0,r=m-1,b=n-1,i=0;
        while(i<arr.size())
        {
            for(int j=l;j<=r;j++)
                ans[t][j]=arr[i++];
            t++;
            for(int j=t;j<=b;j++)
                ans[j][r]=arr[i++];
            r--;
            if(t<=b)
            {
                for(int j=r;j>=l;j--)
                    ans[b][j]=arr[i++];
                b--;
            }
            if(l<=r)
            {
                for(int j=b;j>=t;j--)
                    ans[j][l]=arr[i++];
                l++;
            }
        }
        return ans;
    }
};

//QUESTION 3
class Solution {
  public:
    vector<vector<int>> generateMatrix(vector<int> row, vector<int> col) 
    {
        int n=row.size(),m=col.size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        int i=0,j=0;
        while(i<n&&j<m)
        {
            ans[i][j]=min(row[i],col[j]);
            row[i]-=ans[i][j];
            col[j]-=ans[i][j];
            if(row[i]==0)
                i++;
            if(col[j]==0)
                j++;
        }
        return ans;
    }
};

//QUESTION 4
class Solution {
  public:
    int findMinOperation(vector<vector<int> >& mat) 
    {
        int n=mat.size();
        vector<int> r(n,0);
        vector<int> c(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                r[i]+=mat[i][j];
                c[j]+=mat[i][j];
            }
        }
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxsum=max(maxsum,r[i]);
            maxsum=max(maxsum,c[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
            ans+=maxsum-r[i];
        return ans;
            
    }
};
