class Solution {
  public:
    bool detectLoop(Node* head) 
    {
        if(head==NULL||head->next==NULL)
            return false;
        Node *f=head,*s=head;
        while(f!=NULL&&f->next!=NULL)
        {
            f=f->next->next;
            s=s->next;
            if(f==s)
                return true;
        }
        return false;
    }
};
