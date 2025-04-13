class Solution {
    bool dfs(int i,vector<vector<int>> &g,vector<int> &v,vector<int> &r,string &ans) 
    {
        v[i]=r[i]=1;  
        for (int j=0;j<26;j++) 
        {
            if (g[i][j]) 
            {  
                if (!v[j]) 
                { 
                    if (!dfs(j,g,v,r,ans))  
                        return false;
                } 
                else if (r[j])
                    return false; 
            }
        }
        ans.push_back(char('a'+i));
        r[i]=0;  
        return true;
    }
  public:
    string findOrder(vector<string> &words) 
    {
        vector<vector<int>> g(26, vector<int>(26, 0));
        vector<int> e(26,0),v(26,0),r(26,0);   
        string ans="";
        for (string w:words) 
        {
            for (char c:w)
                e[c-'a']=1;
        } 
        for (int i=0;i+1<words.size();i++) 
        {
            string &a=words[i],&b=words[i + 1];
            int n=a.size(), m=b.size(),j=0;
            while (j<n && j<m && a[j]==b[j])
                j++;
    
            if (j!=n && j==m)
                return "";
            if (j<n && j<m)
                g[a[j]-'a'][b[j]-'a']=1;
        }
        for (int i=0;i<26;i++) 
        {
            if (e[i] && !v[i]) 
            {
                if (!dfs(i,g,v,r,ans))
                    return "";  
            }
        }
        reverse(ans.begin(), ans.end());  
        return ans;
    }
};
