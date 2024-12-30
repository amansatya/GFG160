class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) 
    {
        unordered_set<int> s1(a.begin(),a.end());
        unordered_set<int> s2;
        for(int i=0;i<b.size();i++)
        {
            if(s1.find(b[i])!=s1.end()&&s2.find(b[i])==s2.end())
                s2.insert(b[i]);
        }
        vector<int> ans(s2.begin(),s2.end());
        return ans;
    }
};
