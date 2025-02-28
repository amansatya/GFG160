class Solution {
  public:
    string decodedString(string &s) 
    {
        stack<char> st;
        for (int i=0;i<s.size();i++) 
        {
            if (s[i]!=']')
                st.push(s[i]);
            else 
            {
                string t;
                while (!st.empty() && st.top()!='[') 
                {
                    t.push_back(st.top());
                    st.pop();
                }
                reverse(t.begin(),t.end());
                st.pop(); 
                string s1;
                while (!st.empty() && isdigit(st.top())) 
                {
                    s1=st.top()+s1;
                    st.pop();
                }
                int n=stoi(s1); 
                string s2;
                for (int j=0;j<n;j++)
                    s2.append(t);
                for (char a:s2)
                    st.push(a);
            }
        }
        string ans;
        while (!st.empty()) 
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end()); 
        return ans;
    }
};
