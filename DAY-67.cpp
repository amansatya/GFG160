class Solution {
  public:
    Node* sortedMerge(Node* h1, Node* h2) 
    {
        if(h1==NULL||h2==NULL)
            return h1==NULL?h2:h1;
        if(h1->data<h2->data)
        {
            h1->next=sortedMerge(h1->next,h2);
            return h1;
        }
        else
        {
            h2->next=sortedMerge(h1,h2->next);
            return h2;
        }
    }
};
