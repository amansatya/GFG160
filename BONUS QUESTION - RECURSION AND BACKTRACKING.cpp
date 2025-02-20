//QUESTION 1
class Solution {
  public:
    void words(vector<int> &arr, int i, string &w, vector<string> &m, vector<string> &ans) 
    {
        if (i == arr.size()) 
        {
            ans.push_back(w);
            return;
        }
        int n = arr[i];
        if (n<2 || n>9) 
        {
            words(arr, i+1, w, m, ans);
            return;
        }
        for (char a : m[n]) 
        {
            w.push_back(a);
            words(arr, i+1, w, m, ans);
            w.pop_back();
        }
    }
    vector<string> possibleWords(vector<int> &arr) 
    {
        vector<string> ans;
        vector<string> m = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string w = "";
        words(arr, 0, w, m, ans);
        return ans;
    }
};

//QUESTION 2
class Solution {
public:
    bool valid(string &s) 
    {
        if (s.size()>1 && s[0]=='0') 
            return false;
        int n = stoi(s);
        return n>=0 && n<=255;
    }
    void ip(string &s, int i, vector<string> &w, vector<string> &ans) 
    {
        if (w.size()==4) 
        {
            if (i==s.size())
                ans.push_back(w[0]+"."+w[1]+"."+w[2]+"."+w[3]);
            return;
        }
        for (int j=1;j<=3;j++) 
        {
            if (i+j>s.size()) 
                break;
            string a = s.substr(i, j);
            if (valid(a)) 
            {
                w.push_back(a);
                ip(s, i+j, w, ans);
                w.pop_back();
            }
        }
    }
    vector<string> generateIp(string s) 
    {
        vector<string> ans;
        vector<string> w;
        ip(s, 0, w, ans);
        return ans;
    }
};

//QUESTION 3
class Solution {
  public:
    set<vector<int>> s;
    void combination(vector<int>& arr,vector<vector<int>>& ans,vector<int>& temp,int i,int n)
    {
        if(i==arr.size()||n<0)
            return;
        if(n==0)
        {
            if(s.find(temp)==s.end())
            {
                ans.push_back({temp});
                s.insert(temp);
            }
            return;
        }
        temp.push_back(arr[i]);
        combination(arr,ans,temp,i+1,n-arr[i]);
        combination(arr,ans,temp,i,n-arr[i]);
        temp.pop_back();
        combination(arr,ans,temp,i+1,n);
    }
    vector<vector<int>> combinationSum(vector<int> &arr, int n) 
    {
        vector<vector<int>> ans;
        vector<int> temp;
        combination(arr,ans,temp,0,n);
        return ans;
    }
};

//QUESTION 4
class Solution {
  public:
    void combination(vector<int>& arr,vector<vector<int>>& ans,vector<int>& temp,int i,int n)
    {
        if(n==0)
        {
            ans.push_back({temp});
            return;
        }
        for(int j=i;j<arr.size();j++)
        {
            if (j>i&&arr[j]==arr[j-1]) 
                continue;
            if (arr[j]>n) 
                break;
            temp.push_back(arr[j]);
            combination(arr,ans,temp,j+1,n-arr[j]);
            temp.pop_back();
        }
    }
    vector<vector<int>> uniqueCombinations(vector<int> &arr, int n) 
    {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> temp;
        combination(arr,ans,temp,0,n);
        return ans;
    }
};
