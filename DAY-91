class Solution {
  public:
    void inorder(Node *root,vector<int> &m)
    {
        if(root==NULL)
            return;
        inorder(root->left,m);
        m.push_back(root->data);
        inorder(root->right,m);
    }
    bool findTarget(Node *root, int t) 
    {
        vector<int> m;
        inorder(root,m);
        int i=0,j=m.size()-1,s;
        while(i<j)
        {
            s=m[i]+m[j];
            if(s==t)
                return true;
            if(s<t)
                i++;
            else
                j--;
        }
        return false;
    }
};
