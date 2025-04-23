//QUESTION 1
class Solution {
  public:
    int totHammingDist(vector<int>& arr) 
    {
        int n=arr.size(),ans=0;              
        vector<int> c(32,0);
        for (int i=0;i<n;i++){
            for (int j=0;j<32;j++)
            {
                if ((arr[i]&(1<<j)))
                    c[j]++;
            }
        }
        for (int i=0;i<32;i++)
            ans+=c[i]*(n-c[i]);
        return ans;
    }
};

//QUESTION 2
class Solution {
    void sub(int i,vector<int>& arr,vector<vector<int>>& ans,vector<int>& s) 
    {
        if (i==arr.size()) 
        {
            ans.push_back(s);
            return;
        }
        s.push_back(arr[i]);
        sub(i+1,arr,ans,s);
        s.pop_back();
        sub(i+1,arr,ans,s);
    }
  public:
    vector<vector<int>> subsets(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        vector<int> s;
        vector<vector<int>> ans;
        sub(0,arr,ans,s);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//QUESTION 3
class Solution {
  public:
    int subsetXORSum(vector<int>& arr) 
    {
        int n=arr.size(),b=0;
        for (int i=0;i<n;i++)
            b|=arr[i];
        return (b*pow(2,n-1));
    }
};
