class Solution {
  public:
    Node* reverse(Node* h)
    {
        Node *t1=h, *t2=NULL, *t3=NULL;
        while(t1!=NULL)
        {
            t2=t1->next;
            t1->next=t3;
            t3=t1;
            t1=t2;
        }
        h=t3;
        return h;
    }
    Node* addTwoLists(Node* num1, Node* num2) 
    {
        num1=reverse(num1);
        num2=reverse(num2);
        Node *h=NULL,*t=NULL;
        int c=0;
        while(num1!=NULL || num2!=NULL || c>0)
        {
            int s=c;
            if(num1!=NULL)
            {
                s+=num1->data;
                num1=num1->next;
            }
            if(num2!=NULL)
            {
                s+=num2->data;
                num2=num2->next;
            }
            c=s/10;
            Node *n=new Node(s%10);
            if(h==NULL)
            {
                h=n;
                t=h;
            }
            else
            {
                t->next=n;
                t=n;
            }
        }
        h=reverse(h);
        while(h->data==0&&h->next!=NULL)
            h=h->next;
        return h;
    }
};
