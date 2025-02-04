class Solution {
  public:
    int height(Node *n,int &ans)
    {
        if(n==NULL)
            return 0;
        int l=height(n->left,ans);
        int r=height(n->right,ans);
        ans=max(ans,l+r);
        return max(l,r)+1;
    }
    int diameter(Node* root) 
    {
        int ans=0;
        height(root,ans);
        return ans;
    }
};
