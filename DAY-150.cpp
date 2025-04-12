class Solution {
    void dfs(vector<string> &a,string &e,unordered_set<string> &v,unordered_map<string,vector<string>> &ad) 
    {
        v.insert(e);
        a.push_back(e);
        for (string &x:ad[e]) 
        {
            if (v.find(x)==v.end())
                dfs(a,x,v,ad);
        }
    }
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &arr) 
    {
        unordered_map<string,vector<string>> ad;
        unordered_set<string> v;
        for (vector<string> &i:arr) 
        {
            string f=i[1];
            for (int j=2;j<i.size();j++) 
            {
                string e=i[j];
                ad[f].push_back(e);
                ad[e].push_back(f);
            }
        }
        vector<vector<string>> ans;
        for (vector<string> &i:arr) 
        {
            string an=i[0],f=i[1];
            if (v.find(f)==v.end()) 
            {
                vector<string> a;
                a.push_back(an);
                dfs(a,f,v,ad);
                ans.push_back(a);
            }
        }
        return ans;
    }
};
