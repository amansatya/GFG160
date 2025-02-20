class Solution {
  public:
    bool operator()(Node *a,Node *b)
    {
        return a->data>b->data;
    }
    Node* mergeKLists(vector<Node*>& arr) 
    {
        priority_queue<Node *,vector<Node *>,Solution> p;
        for(Node * h:arr)
        {
            if(h!=NULL)
                p.push(h);
        }
        Node *d= new Node(-1);
        Node *t=d;
        while(!p.empty())
        {
            Node *top=p.top();
            p.pop();
            t->next=top;
            t=top;
            if(top->next!=NULL)
                p.push(t->next);
        }
        return d->next;
    }
};
