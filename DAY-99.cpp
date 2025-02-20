class Solution {
  public:
    bool match(char c1,char c2)
    {
        if((c1=='(' && c2==')') || (c1=='[' && c2==']') || (c1=='{' && c2=='}'))
            return true;
        return false;
    }
    bool isBalanced(string& s) 
    {
        stack<char> st;
        int i=0;
        while (i<s.size())
        {
            if (s[i]=='(' || s[i]=='[' || s[i]=='{')
                st.push(s[i]);
            else
            {
                if (st.empty())
                    return false;
                char x= st.top();
                st.pop();
                if (!(match(x,s[i])))
                    return false;
            }
            i++;
        }
        return st.empty();
    }
};
