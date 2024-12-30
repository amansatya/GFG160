//QUESTION 1
class Solution {
  public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> ans;
        for(int i=1;i<=n;i++)
        {
            string s="";
            if(i%3==0)
                s.append("Fizz");
            if(i%5==0)
                s.append("Buzz");
            if(s.empty())
                s.append(to_string(i));
            ans.push_back(s);
        }
        return ans;
    }
};

//QUESTION 2
class Solution {
  public:
    bool check(string& s, string& pattern)
    {
        int j = 0;
        int n = s.size();
        int m = pattern.size();
        for (int i = 0; i < n; i++) 
        {
            if (s[i] == pattern[j])
                j++;
            else if (isupper(s[i]) && j != m)
                return false;
        }
        if(j!=m)
            return false;
        return true;
    }
    vector<string> camelCase(vector<string> &arr, string &pat) 
    {
        vector<string> ans;
        for (auto word : arr) 
        {
            if (check(word, pat))
                ans.push_back(word);
        }
        return ans;
    }
};

//QUESTION 3
class Solution {
  public:
    bool sentencePalindrome(string &s) 
    {
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j)
        {
            if (!isalnum(s[i]))
                i++;
            else if (!isalnum(s[j]))
                j--;
            else if (tolower(s[i]) == tolower(s[j]))
            {
                i++;
                j--;
            }
            else
                return false;
        }
        return true;
    }
};

//QUESTION 4
class Solution {
  public:
    int minRepeats(string& s1, string& s2) 
    {
        int c=1;
        string temp=s1;
        while(s1.size()<s2.size())
        {
            s1=s1+temp;
            c++;
        }
        if(s1.find(s2)!=-1)
            return c;
        s1=s1+temp;
        c++;
        if(s1.find(s2)!=-1)
            return c;
        return -1;
    }
};

//QUESTION 5
class Solution {
  public:
    int longestPrefixSuffix(string &s) 
    {
        int n = s.length();
        vector<int> lps(n);
        int len = 0;
        lps[0] = 0;

        int i = 1;
        while (i < s.length()) 
        {
            if (s[i] == s[len]) 
            {
                len++;
                lps[i] = len;
                i++;
            }
            else 
            {
                if (len != 0)
                    len = lps[len - 1];
                else 
                {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps[n - 1];
    }
};

//QUESTION 6
string ones[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
string tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
string thousands[] = { "", "Thousand", "Million", "Billion", "Trillion" };
class Solution {
  public:
    string convertThreeDigits(int n) 
    {
        string result = "";
        if (n >= 100) 
        {
            result += ones[n / 100] + " Hundred ";
            n = n % 100;
        }
        if (n >= 20) 
        {
            result += tens[n / 10] + " ";
            n = n % 10;
        }
        if (n > 0)
            result += ones[n] + " ";

        return result;
    }
    string convertToWords(int n) 
    {
        if (n == 0)
            return "Zero";
        string result = "";
        int groupIndex = 0;
        bool firstGroup = true;
        while (n > 0) 
        {
            if (n % 1000 != 0) 
            {
                if (!firstGroup)
                    result = " " + result;
                result=convertThreeDigits(n%1000)+thousands[groupIndex]+result;
                firstGroup = false;  
            }
            n /= 1000;
            groupIndex++;
        }
        if (result[result.length() - 1] == ' ')
            result = result.substr(0, result.length() - 1);
        return result;
    }
};
