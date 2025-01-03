class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) 
    {
        unordered_map<int,int> m;
        int c=0,s=0;
        for(int i=0;i<arr.size();i++)
        {
            s^=arr[i];
            if(s==k)
                c+=1;
            if(m.find(k^s)!=m.end())
                c+=m[k^s];
            m[s]++;
        }
        return c;
    }
};
