class Solution {
  public:
    Node* reverseList(struct Node* head) 
    {
        if(head==NULL||head->next==NULL)
            return head;
        Node* t1=head,*t2=NULL,*t3=NULL;
        while(t1!=NULL)
        {
            t2=t1->next;
            t1->next=t3;
            t3=t1;
            t1=t2;
        }
        head=t3;
        return head;
    }
};
