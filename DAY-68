class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) 
    {
        if(head==NULL||head->next==NULL)
            return head;
        Node *head1=NULL,*t1=head,*t2=NULL,*t3=NULL,*t4=NULL,*t5=NULL;
        int c;
        while(t1!=NULL)
        {
            t2=t1;
            t3=NULL;
            t4=NULL;
            c=0;
            while(t1!=NULL&&c<k)
            {
                t3=t1->next;
                t1->next=t4;
                t4=t1;
                t1=t3;
                c++;
            }
            if(head1==NULL)
                head1=t4;
            if(t5!=NULL)
                t5->next=t4;
            t5=t2;
        }
        return head1;
    }
};
