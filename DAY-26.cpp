class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) 
    {
        sort(intervals.begin(),intervals.end());
        int c=0,end=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<end)
            {
                c++;
                end=min(intervals[i][1],end);
            }
            else
                end=intervals[i][1];
        }
        return c;
    }
};
