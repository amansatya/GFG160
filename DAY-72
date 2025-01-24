class Solution {
  public:
    Node *s,*f;
    bool detectcycle(Node* head)
    {
        s=head,f=head;
        while(f!=NULL && f->next!=NULL)
        {
            s=s->next;
            f=f->next->next;
            if(s==f)
                return true;
        }
        return false;
    }
    Node* findFirstNode(Node* head) 
    {
        if(!detectcycle(head))
            return NULL;
        s=head;
        while(s!=f)
        {
            s=s->next;
            f=f->next;
        }
        return s;
    }
};
