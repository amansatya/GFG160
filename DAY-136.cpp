class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) 
    {
        int s1=0,s2=0;
        for(int i=0;i<gas.size();i++)
        {
            s1+=gas[i];
            s2+=cost[i];
        }
        if(s1<s2)
            return -1;
        int ans=0,s=0;
        for(int i=0;i<gas.size();i++)
        {
            if(gas[i]+s<cost[i])
            {
                ans=i+1;
                s=0;
            }
            else
                s+=gas[i]-cost[i];
        }
        return ans;    
    }
};
