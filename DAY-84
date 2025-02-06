class Solution {
  public:
    Node *tree(unordered_map<int,int> &m,vector<int> &preorder,int i,int j,int &k)
    {
        if(i>j)
            return NULL;
        int n=preorder[k++];
        Node *root=new Node(n);
        root->left=tree(m,preorder,i,m[n]-1,k);
        root->right=tree(m,preorder,m[n]+1,j,k);
        return root;
    }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) 
    {
        unordered_map<int,int> m;
        for(int i=0;i<inorder.size();i++)
            m[inorder[i]]=i;
        int k=0;
        return tree(m,preorder,0,inorder.size()-1,k);
    }
};
