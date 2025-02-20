class Solution {
  public:
    int height(Node* n) 
    {
        if(n==NULL)
            return -1;
        int l=height(n->left);
        int r=height(n->right);
        return max(l,r)+1;
    }
};
