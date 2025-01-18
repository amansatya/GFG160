class Solution {
  public:
    Node* rotate(Node* head, int k) 
    {
        if(head==NULL||head->next==NULL||k==0)
            return head;
        int c=1;
        Node* a=head;
        while(a->next!=NULL)
        {
            c++;
            a=a->next;
        }
        k%=c;
        if(k==0)
            return head;
        a->next=head;
        a=head;
        for(int i=1;i<k;i++)
            a=a->next;
        head=a->next;
        a->next=NULL;
        return head;
    }
};
