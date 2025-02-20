class Solution {
  public:
    void sum(Node *r,int k,int &ans,int s,unordered_map<int,int> &m)
    {
        if(r==NULL)
            return;
        s+=r->data;
        if(s==k)
            ans++;
        if(m.find(s-k)!=m.end())
            ans+=m[s-k];
        m[s]++;
        sum(r->left,k,ans,s,m);
        sum(r->right,k,ans,s,m);
        m[s]--;
    }
    int sumK(Node *root, int k) 
    {
        unordered_map<int,int> m;
        int ans=0;
        sum(root,k,ans,0,m);
        return ans;
    }
};
