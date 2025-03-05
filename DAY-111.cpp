class Solution {
  public:
    bool static cmp(string& a,string& b) 
    {
        return a.size()<b.size();
    }
    int longestStringChain(vector<string>& words) 
    {
        sort(words.begin(),words.end(),cmp);
        unordered_map<string, int> d;
        int ans=1;
        for (string &a : words) 
        {
            d[a]=1;
            for (int i=0;i<a.size();i++) 
            {
                string p=a.substr(0,i)+a.substr(i+1);
                if (d.find(p)!=d.end()) 
                    d[a]=max(d[a],d[p]+1);
            }
            ans=max(ans,d[a]);
        }
        return ans;
    }
};
