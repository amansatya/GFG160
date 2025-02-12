class Solution {
  public:
    void element(Node *root, int &k,int &ans)
    {
        if(root==NULL || k==0)
            return;
        element(root->left,k,ans);
        if(--k==0)
        {
            ans=root->data;
            return;
        }
        element(root->right,k,ans);
    }
    int kthSmallest(Node *root, int k) 
    {
        int ans=-1;
        element(root,k,ans);
        return ans;
    }
};
