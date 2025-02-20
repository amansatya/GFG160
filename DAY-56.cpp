class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int t) 
    {
        vector<int> ans;
        int s=0,i=0,j=0;
        for(int k=0;k<arr.size();k++)
        {
            s+=arr[k];
            if(s>=t)
            {
                j=k;
                while(s>t)
                {
                    s-=arr[i];
                    i++;
                }
                if(s==t)
                {
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    return ans;
                }
            }
        }
        return {-1};
    }
};
