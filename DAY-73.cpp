class Solution {
  public:
    Node *s,*f;
    bool cycle(Node* h)
    {
        s=h,f=h;
        while(f!=NULL && f->next!=NULL)
        {
            f=f->next->next;
            s=s->next;
            if(s==f)
                return true;
        }
        return false;
    }
    void removeLoop(Node* head)
    {
        if(!cycle(head))
            return;
        s=head;
        if(s==f)
        {
            while(f->next!=s)
                f=f->next;
        }
        else
        {
            while(s->next!=f->next)
            {
                s=s->next;
                f=f->next;
            }
        }
        f->next=NULL;
    }
};
