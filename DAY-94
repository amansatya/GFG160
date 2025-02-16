class Solution {
  public:
    void serial(Node *r,vector<int> &arr)
    {
        if(r==NULL)
        {
            arr.push_back(-1);
            return;
        }
        arr.push_back(r->data);
        serial(r->left,arr);
        serial(r->right,arr);
    }
    vector<int> serialize(Node *root) 
    {
        vector<int> arr;
        serial(root,arr);
        return arr;
    }
    Node *deserial(vector<int> &arr,int &i)
    {
        if(arr[i]==-1 || i>arr.size())
        {
            i++;
            return NULL;
        }
        Node *r=new Node(arr[i++]);
        r->left=deserial(arr,i);
        r->right=deserial(arr,i);
        return r;
    }
    Node *deSerialize(vector<int> &arr) 
    {
        int i=0;
        return deserial(arr,i);
    }
};
