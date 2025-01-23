class Solution {
  public:
    Node *cloneLinkedList(Node *head) 
    {
        if(head==NULL)
            return NULL;
        unordered_map<Node* , Node*> m;
        Node* newhead=new Node(head->data);
        Node *t1=head->next,*t2=newhead;
        m[head]=newhead;
        while(t1!=NULL)
        {
            Node* p=new Node(t1->data);
            m[t1]=p;
            t2->next=p;
            t1=t1->next;
            t2=t2->next;
        }
        t1=head,t2=newhead;
        while(t1!=NULL)
        {
            t2->random=m[t1->random];
            t1=t1->next;
            t2=t2->next;
        }
        return newhead;
    }
};
