int myAtoi(char *s) 
    {
        int i=0,k=1,ans=0;
        while(s[i]==' ')
            i++;
        if(s[i]=='-')
        {
            k=-1;
            i++;
        }
        while(s[i]>='0'&&s[i]<='9')
        {
            if(ans>INT_MAX/10 || (ans==INT_MAX/10 && s[i]-'0'>7))
                return k==1?INT_MAX:INT_MIN;
            ans=ans*10+(s[i]-'0');
            i++;
        }
        return ans*k;
    }
