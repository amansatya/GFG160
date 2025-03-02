class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) 
    {
        deque<int> m1,m2;
        int n=arr.size(),i=0,j=0,k=0,l=0;
        while (j<n) 
        {
            while (!m1.empty() && arr[m1.back()]>arr[j])
                m1.pop_back();
            while (!m2.empty() && arr[m2.back()]<arr[j])
                m2.pop_back();
            m1.push_back(j);
            m2.push_back(j);
            while (arr[m2.front()]-arr[m1.front()]>x) 
            {
                if (i==m1.front())
                    m1.pop_front();
                if (i==m2.front())
                    m2.pop_front();
                i+=1;
            }
            if (j-i > l-k) 
            {
                k=i;
                l=j;
            }
            j+=1;
        }
        vector<int> ans;
        for (int m=k;m<=l;m++)
            ans.push_back(arr[m]);
        return ans;
    }
};
