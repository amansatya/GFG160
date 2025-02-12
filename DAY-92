class Solution {
  public:
    void value(Node *root,Node *&t1,Node *&t2,Node *&t3,Node *&p)
    {
        if(root==NULL)
            return;
        value(root->left,t1,t2,t3,p);
        if(p!=NULL && p->data>root->data)
        {
            if(t1==NULL)
            {
                t1=p;
                t2=root;
            }
            else
            {
                t3=root;
                t2=NULL;
            }
        }
        p=root;
        value(root->right,t1,t2,t3,p);
    }
    void correctBST(Node* root) 
    {
        Node *t1=NULL,*t2=NULL,*t3=NULL,*p=NULL;
        value(root,t1,t2,t3,p);
        if(t1!=NULL && t2!=NULL)
            swap(t1->data,t2->data);
        else if(t1!=NULL && t3!=NULL)
            swap(t1->data,t3->data);
    }
};
