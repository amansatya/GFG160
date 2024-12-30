//QUESTION 1
class solution {
  public:
    string addString(string &s1, string &s2) 
    {
      int i = s1.length() - 1;
      int j = s2.length() - 1;
      int carry = 0;
      string res = "";
      while (i >= 0 || j >= 0 || carry > 0) 
      {
        int sum = carry;
        if (i >= 0)
            sum += (s1[i] - '0');

        if (j >= 0)
            sum += (s2[j] - '0');

        res.push_back(sum % 10 + '0');
        carry = sum / 10;
        i--;
        j--;
      }
      while (!res.empty() && res.back() == '0')
        res.pop_back();
      reverse(res.begin(), res.end());
      return res;
    }
    string minSum(vector<int> &arr) 
    {
      sort(arr.begin(), arr.end());
      string s1 = "", s2 = "";
      for (int i = 0; i < arr.size(); i++) 
      {
        if (i % 2 == 0)
            s1.push_back(arr[i] + '0');
        else
            s2.push_back(arr[i] + '0');
      }
      return addString(s1, s2);
    }
};

//QUESTION 2
class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) 
    {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++)
        {
            if(arr[i][1]>arr[i+1][0])
                return false;
        }
        return true;
    }
};

//QUESTION 3
class Solution {
  public:
    static bool compare(string &a,string &b) 
    {
        return (a + b) > (b + a);
    }
    string findLargest(vector<int> &arr) 
    {
        vector<string> s;
        for (int a : arr)
            s.push_back(to_string(a));
        sort(s.begin(), s.end(), compare);
        if (s[0] == "0") 
            return "0";
        string ans;
        for (const string &a : s)
            ans += a;
        return ans;
    }
};

//QUESTION 4
class Solution {
  public:
    int minIncrements(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int c=0;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]<=arr[i-1])
            {
                c+=arr[i-1]+1-arr[i];
                arr[i]=arr[i-1]+1;
            }
        }
        return c;
    }
};
