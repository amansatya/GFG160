class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) 
    {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int>v;
            for(int i=0;i<s;i++)
            {
                Node *n=q.front();
                q.pop();
                if(n->left!=NULL)
                    q.push(n->left);
                if(n->right!=NULL)
                    q.push(n->right);
                v.push_back(n->data);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
