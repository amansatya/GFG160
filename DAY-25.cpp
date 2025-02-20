class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &i,vector<int> &n) 
    {
        vector<vector<int>> ans;
        int size = i.size(),j=0;
        while(j<size && i[j][1]<n[0])
        {
            ans.push_back(i[j]);
            j++;
        }
        while(j<size && i[j][0]<=n[1])
        {
            n[0]=min(n[0],i[j][0]);
            n[1]=max(n[1],i[j][1]);
            j++;
        }
        ans.push_back(n);
        while(j<size)
        {
            ans.push_back(i[j]);
            j++;
        }
        return ans;
    }
};
