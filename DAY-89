class Solution {
  public:
    bool isbst(Node *&r,Node *&p)
    {
        if(r==NULL)
            return true;
        if(!isbst(r->left,p))
            return false;
        if(p!=NULL && p->data>=r->data)
            return false;
        p=r;
        return isbst(r->right,p);
    }
    bool isBST(Node* root) 
    {
        Node *p=NULL;
        return isbst(root,p);
    }
};
