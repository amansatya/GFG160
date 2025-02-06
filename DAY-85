class Solution {
  public:
    void traversal(vector<int> &ans,Node* root)
    {
        if(root==NULL)
            return;
        traversal(ans,root->left);
        ans.push_back(root->data);
        traversal(ans,root->right);
    }
    vector<int> inOrder(Node* root) 
    {
        vector<int> ans;
        traversal(ans,root);
        return ans;
    }
};
