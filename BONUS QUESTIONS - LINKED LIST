//QUESTION 1
class Solution {
  public:
    int count(Node *h)
    {
        int c=0;
        while(h!=NULL)
        {
            c++;
            h=h->next;
        }
        return c;
    }
    Node *get(int d,Node *h1,Node *h2)
    {
        for(int i=0;i<d;i++)
            h1=h1->next;
        while(h1!=NULL && h2!=NULL)
        {
            if(h1==h2)
                return h1;
            h1=h1->next;
            h2=h2->next;
        }
        return NULL;
    }
    Node* intersectPoint(Node* h1, Node* h2) 
    {
        int c1=count(h1),c2=count(h2);
        if(c1>c2)
        {
            int d=c1-c2;
            return get(d,h1,h2);
        }
        else
        {
            int d=c2-c1;
            return get(d,h2,h1);
        }
        return NULL;
    }
};

//QUESTION 2
class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) 
    {
        int c=0;
        Node *t=head;
        while(t!=NULL)
        {
            c++;
            t=t->next;
        }
        stack<int> s;
        for(int i=0;i<c/2;i++)
        {
            s.push(head->data);
            head=head->next;
        }
        if(c%2!=0)
            head=head->next;
        while(head!=NULL)
        {
            if(s.top()!=head->data)
                return false;
            s.pop();
            head=head->next;
        }
        return true;
    }
};

//QUESTION 3
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

//QUESTION 4
class LFUCache {
  public:
    unordered_map<int,pair<int,int>> m;
    unordered_map<int,list<int>> m1;
    unordered_map<int,list<int>::iterator> m2;
    int minf,cap;
    LFUCache(int c) 
    {
        cap=c;
        minf=0;
    }
    int get(int k) 
    {
        if(m.find(k)==m.end())
            return -1;
        int f=m[k].second;
        m1[f].erase(m2[k]);
        m[k].second++;
        m1[m[k].second].push_back(k);
        m2[k]=--m1[m[k].second].end();
        if(m1[minf].empty())
            minf++;
        return m[k].first;
    }
    void put(int k, int v) 
    {
        if(!cap)
            return;
        if(m.find(k)!=m.end())
        {
            m[k].first=v;
            get(k);
            return;
        }
        if(m.size()==cap)
        {
            int d=m1[minf].front();
            m.erase(d);
            m2.erase(d);
            m1[minf].pop_front();
        }
        m[k]={v,1};
        m1[1].push_back(k);
        m2[k]=--m1[1].end();
        minf=1;
    }
};

//QUESTION 5
class Solution {
  public:
    Node *merge(Node *h1, Node *h2)
    {
        Node d(-1);
        Node *t=&d;
        while(h1!=NULL && h2!=NULL)
        {
            if(h1->data<=h2->data)
            {
                t->bottom=h1;
                h1=h1->bottom;
            }
            else
            {
                t->bottom=h2;
                h2=h2->bottom;
            }
            t=t->bottom;
        }
        if(h1==NULL)
            t->bottom=h2;
        else
            t->bottom=h1;
        return (d.bottom);
    }
    Node *flatten(Node *root) 
    {
        if(root==NULL || root->next==NULL)
            return root;
        root->next=flatten(root->next);
        root=merge(root,root->next);
        return root;
    }
};
