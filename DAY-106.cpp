class Solution {
  public:
    int evaluate(vector<string>& arr) 
    {
        stack<int> s;
        for(string i:arr)
        {
            if(isdigit(i[0]) || i.size()>1 && i[0]=='-')
                s.push(stoi(i));
            else
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                if(i=="+")
                    s.push(y+x);
                else if(i=="-")
                    s.push(y-x);
                else if(i=="*")
                    s.push(y*x);
                else if(i=="/")
                    s.push(y/x);
            }
        }
        return s.top();
    }
};
