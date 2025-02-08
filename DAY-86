class Solution {
  public:
    void left(Node *r,vector<int> &ans)
    {
        if(r==NULL)
            return;
        if(r->left!=NULL)
        {
            ans.push_back(r->data);
            left(r->left,ans);
        }
        else if(r->right!=NULL)
        {
            ans.push_back(r->data);
            left(r->right,ans);
        }
    }
    void right(Node *r,vector<int> &ans)
    {
        if(r==NULL)
            return;
        if(r->right!=NULL)
        {
            right(r->right,ans);
            ans.push_back(r->data);
        }
        else  if(r->left!=NULL)
        {
            right(r->left,ans);
            ans.push_back(r->data);
        }
    }
    void bottom(Node *r,vector<int> &ans)
    {
        if(r==NULL)
            return;
        if(r->left==NULL && r->right==NULL)
        {
            ans.push_back(r->data);
            return;
        }
        if(r->left!=NULL)
            bottom(r->left,ans);
        if(r->right!=NULL)
            bottom(r->right,ans);
    }
    vector<int> boundaryTraversal(Node *root) 
    {
        vector<int> ans;
        if(root==NULL)
            return ans;
        ans.push_back(root->data);
        left(root->left,ans);
        bottom(root->left,ans);
        bottom(root->right,ans);
        right(root->right,ans);
        return ans;
    }
};
