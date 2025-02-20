class Solution {
  public:
    int longestUniqueSubstr(string &s) 
    {
        if(s.size()==0||s.size()==1)
            return s.size();
        int ans=0,i=0,j=0;
        unordered_set<char> set;
        while(j<s.size())
        {
            while(set.find(s[j])!=set.end())
            {
                set.erase(s[i]);
                i++;
            }
            set.insert(s[j]);
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
