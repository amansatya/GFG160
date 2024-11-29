string addBinary(string& s1, string& s2) 
    {
        string ans="";
        int n=s1.size()-1,m=s2.size()-1,c=0;
        while(n>=0||m>=0)
        {
            int c2=0,p=0,q=0;
            if(n>=0 && s1[n]=='1')
                p=1;
            if(m>=0 && s2[m]=='1')
                q=1;
            c2=p+q+c;
            ans+=(c2%2)?'1':'0';
            c=c2/2;
            n--;
            m--;
        }
        if(c==1)
            ans+='1';
        reverse(ans.begin(),ans.end());
        int i=0;
        while(ans[i]=='0')
            ans.erase(0,1);
        return ans;
    }
