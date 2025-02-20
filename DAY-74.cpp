class node
{
public:
    int data,key;
    node *prev,*next;
    node(int k,int n)
    {
        data=n;
        key=k;
        next=prev=NULL;
    }
};
class lru
{
    int cap;
    node *head,*tail;
    unordered_map<int,node *>m;
    void add(node *a)
    {
        if(head==NULL)
            head=tail=a;
        else
        {
            a->next = head;
            head->prev = a;
            head = a;
        }
    }
    void del(node *a)
    {
        if(head==a && tail==a)
            head=tail=NULL;
        else if(head==a)
        {
            head=head->next;
            head->prev=NULL;
        }
        else if(tail==a)
        {
            tail=tail->prev;
            tail->next=NULL;
        }
        else
        {
            node *p=a->prev,*n=a->next;
            p->next=n;
            n->prev=p;
        }
    }
public:
    lru(int c)
    {
        cap=c;
        head=tail=NULL;
    }
    int get(int k)
    {
        int ans=-1;
        if(m.find(k)!=m.end())
        {
            node *a=m[k];
            ans=a->data;
            m.erase(k);
            del(a);
            add(a);
            m[k]=head;
        }
        return ans;
    }
    void put(int k,int d)
    {
        if(m.find(k)!=m.end())
        {
            node *a=m[k];
            m.erase(k);
            del(a);
        }
        if(m.size()==cap)
        {
            m.erase(tail->key);
            del(tail);
        }
        node *n=new node(k,d);
        add(n);
        m[k]=n;
    }
};
//YOU CAN ALSO USE DEFAULT DOUBLY LINKED LIST IN CPP AND REMOVE ADD AND DEL FUNCTION AND CHANGE PUT AND GET ACCORDINGLY
