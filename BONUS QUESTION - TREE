//QUESTION 1
class Solution {
  public:
    bool mirror(Node *l,Node *r)
    {
        if(l==NULL && r==NULL)
            return true;
        else if(r==NULL || l==NULL || r->data!=l->data)
            return false;
        return mirror(l->left,r->right) && mirror(l->right,r->left);
    }
    bool isSymmetric(Node* root) 
    {
        if(root==NULL)
            return true;
        return mirror(root->left,root->right);
    }
};

//QUESTION 2
class Solution {
  public:
    int balance(Node *root)
    {
        if(root==NULL)
            return 0;
        int l=balance(root->left);
        if(l==-1)
            return -1;
        int r=balance(root->right);
        if(r==-1)
            return -1;
        if(abs(l-r)>1)
            return -1;
        return max(l,r)+1;
    }
    bool isBalanced(Node* root) 
    {
        return balance(root)!=-1;
    }
};

//QUESTION 3
class Solution {
  public:
    void dfs(Node* r, int i, int &j, map<int, vector<int>>& m) 
    {
        if (r == NULL) 
            return;
        m[i].push_back(r->data);
        j=min(i,j);
        dfs(r->left,i-1,j,m);
        dfs(r->right,i+1,j,m);
    }
    vector<vector<int>> verticalOrder(Node* root) 
    {
        map<int, vector<int>> m;
        int j=0;
        dfs(root,0,j,m);
        vector<vector<int>> ans;
        int i=j;
        while(m.find(i)!=m.end())
        {
            ans.push_back(m[i]);
            i++;
        }
        return ans;
    }
};

//QUESTION 4
class Solution {
  public:
    int distribute(Node *root,int &ans)
    {
        if(root==NULL)
            return 0;
        int l=distribute(root->left,ans);
        int r=distribute(root->right,ans);
        ans+=abs(l)+abs(r);
        return root->data+l+r-1;
    }
    int distributeCandy(Node* root) 
    {
        int ans=0;
        distribute(root,ans);
        return ans;
    }
};

//QUESTION 5
class Solution {
  public:
    void inorder(Node *r,vector<int> &m)
    {
        if(r==NULL)
            return;
        inorder(r->left,m);
        m.push_back(r->data);
        inorder(r->right,m);
    }
    Node* build(vector<int> &m,int i,int j)
    {
        if(i>j)
            return NULL;
        int k=(i+j)/2;
        Node *r=new Node(m[k]);
        r->left=build(m,i,k-1);
        r->right=build(m,k+1,j);
        return r;
    }
    Node* balanceBST(Node* root) 
    {
        vector<int> m;
        inorder(root,m);
        return build(m,0,m.size()-1);
    }
};

//QUESTION 6
class Solution {
  public:
    int getCount(Node *r, int l, int h) 
    {
        if(r==NULL)
            return 0;
        else if(r->data>=l && r->data<=h)
            return 1+getCount(r->left,l,h)+getCount(r->right,l,h);
        else if(r->data<l)
            getCount(r->right,l,h);
        else
            getCount(r->left,l,h);
    }
};

//QUESTION 7
class Solution {
  public:
    int vaccine(Node *root,int &ans)
    {
        if(root==NULL)
            return 1;
        int l=vaccine(root->left,ans);
        int r=vaccine(root->right,ans);
        if(l==0 || r==0)
        {
            ans++;
            return 2;
        }
        if(l==2 || r==2)
            return 1;
        return 0;
    }
    int supplyVaccine(Node* root) 
    {
        int ans=0;
        if(vaccine(root,ans)==0)
            ans++;
        return ans;
    }
};
