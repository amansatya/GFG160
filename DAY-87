class Solution {
  public:
    int sum(Node *root,int &ans)
    {
        if(root==NULL)
            return 0;
        int l=sum(root->left,ans),r=sum(root->right,ans);
        if(l>0 && r>0)
            ans=max(ans,root->data+l+r);
        else if(l<0 && r<0)
            ans=max(ans,root->data);
        else
            ans=max(ans,root->data+max(l,r));
        return max(0,root->data+max(l,r));
    }
    int findMaxSum(Node *root) 
    {
        int ans=INT_MIN;
        sum(root,ans);
        return ans;
    }
};
