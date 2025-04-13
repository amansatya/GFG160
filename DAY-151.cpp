class Solution {
    unordered_map<Node*,Node*> c;
  public:
    Node* cloneGraph(Node* node) 
    {
        if (!node) 
            return NULL;
        if (c.find(node)==c.end()) 
        {
            Node* n=new Node();
            n->val=node->val;
            c[node]=n;
            for (Node* a:node->neighbors)
                n->neighbors.push_back(cloneGraph(a));
        }
        return c[node];
    }
};
