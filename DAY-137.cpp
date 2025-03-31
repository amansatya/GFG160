class Solution {
  public:
    int maxPartitions(string &s) 
    {
        vector<int> m(26,-1);
        for(int i=0;i<s.size();i++)
            m[s[i]-'a']=i;
        int ans=0,e=-1;   
        for(int i=0;i<s.size();i++) 
        {
            e=max(m[s[i]-'a'],e);  
            if(e==i)  
                ans++;  
        }
        return ans; 
    }
};
