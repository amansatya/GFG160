bool areAnagrams(string& s, string& t) 
    {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,int> c;
        for(char a:s)
            c[a]++;
        for(char a:t)
        {
            if(c.find(a)==c.end()||c[a]==0)
                return false;
            c[a]--;
        } 
        for(char a:s)
        {
            if(c[a]!=0)
                return false;
        }
        return true;
    }
