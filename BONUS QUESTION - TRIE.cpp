//QUESTION 1
class Node {
public:
    Node* children[26];
    bool eow;
    Node() 
    {
        for (int i=0;i<26;i++)
            children[i]=NULL;
        eow=false;
    }
};
class Solution {
    void insert(Node* root,string& s) 
    {
        Node* c=root;
        for (char a:s) 
        {
            int i=a-'a';
            if (c->children[i]==NULL)
                c->children[i]=new Node();
            c=c->children[i];
        }
        c->eow=true;
    }
    string longestStringRecur(Node* root,const string& pre) 
    {
        if (root==NULL)
            return pre;
        string l=pre;
        for (int i=0;i<26;i++) 
        {
            if (root->children[i]!=NULL && root->children[i]->eow) 
            {
                string s=pre+(char)(i+'a');
                string c=longestStringRecur(root->children[i],s);
                if (c.length()>l.length())
                    l=c;
            }
        }
        return l;
    }
public:
    string longestValidWord(vector<string>& words) 
    {
        Node* root=new Node();
        for (string& s:words)
            insert(root,s);
        return longestStringRecur(root,"");
    }
};

//QUESTION 2
class node {
public:
    node *left;
    node *right;
};
class trie {
    node *root;
public:
    trie() 
    {
        root = new node();
    }
    void insert(int n) 
    {
        node *t=root;
        for (int i=31;i>=0;i--) 
        {
            int b=(n>>i)&1;
            if (b==0) 
            {
                if (t->left==NULL)
                    t->left=new node();
                t=t->left;
            } 
            else 
            {
                if (t->right==NULL)
                    t->right=new node();
                t=t->right;
            }
        }
    }
    int xorHelper(int value) 
    {
        int c=0;
        node *t=root;
        for (int j=31;j>=0;j--) 
        {
            int b=(value>>j)&1;
            if (b==0) 
            {
                if (t->right!=NULL) 
                {
                    t=t->right;
                    c+=(1<<j); 
                } 
                else
                    t=t->left;
            } 
            else 
            {
                if (t->left!=NULL) 
                {
                    t=t->left;
                    c+=(1<<j); 
                } 
                else
                    t=t->right;
            }
        }
        return c;
    }
};
class Solution {
  public:
    vector<int> maxXor(vector<int> &arr,vector<vector<int>> &queries) 
    {
        int n=arr.size(),m=queries.size(),j=0;
        vector<int> ans(m);
        vector<vector<int>> q;
        sort(arr.begin(),arr.end()); 
        for (int i=0;i<m;i++)
            q.push_back({queries[i][1],queries[i][0],i});
        sort(q.begin(),q.end());
        trie t;
        for (int i=0;i<m;i++) 
        {
            while (j<arr.size() && arr[j]<=q[i][0])
                t.insert(arr[j++]);
            if (j==0)
                ans[q[i][2]]=-1;
            else
                ans[q[i][2]]=t.xorHelper(q[i][1]);
        }
        return ans;
    }
};
