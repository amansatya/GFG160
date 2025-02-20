char nonRepeatingChar(string &s) 
    {
        unordered_map<char,int> a;
        for(char p:s)
            a[p-'a']++;
        for(int i=0;i<s.size();i++)
        {
            if(a[s[i]-'a']==1)
                return s[i];
        }
        return '$';
    }
