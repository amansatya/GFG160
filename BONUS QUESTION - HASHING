//QUESTION 1
class Solution {
  public:
    int romanToDecimal(string &s) 
    {
        unordered_map<char,int> rm={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n=s.size(),no=0;
        for(int i=0;i<n;i++)
        {
            if(i+1<n && rm[s[i]]<rm[s[i+1]])
            {
                no+=rm[s[i+1]]-rm[s[i]];
                i++;
            }
            else
                no+=rm[s[i]];
        }    
        return no;
    }
};

//QUESTION 2
class Solution {
  public:
    int maxDistance(vector<int> &arr) 
    {
        unordered_map<int,int> m;
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            if(m.find(arr[i])==m.end())
                m[arr[i]]=i;
            ans=max(ans,i-m[arr[i]]);
        }
        return ans;
    }
};

//QUESTION 3
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairs(vector<int>& arr, int k) 
    {
        unordered_map<int,int> m;
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(m.find(arr[i]-k)!=m.end())
                c+=m[arr[i]-k];
            if(m.find(arr[i]+k)!=m.end())
                c+=m[arr[i]+k];
            m[arr[i]]++;
        }
        return c;
    }
};

//QUESTION 4
class Solution {
  public:
    int countSum(vector<int>& nums, int target) 
    {
        unordered_map<int,vector<pair<int,int>>> m;
        int c=0,n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
                m[nums[i]+nums[j]].push_back({i,j});
        }
        for(int i=0;i<n-1;i++)
        {
            
            for(int j=i+1;j<n;j++)
            {
                int x=target-(nums[i]+nums[j]);
                if(m.find(x)!=m.end())
                {
                    for(auto &p:m[x])
                    {
                        if(p.first>j)
                            c++;
                    }
                }
            }
        }
        return c;
    }
};

//QUESTION 5
class Solution {
  public:
    int numOfSubset(vector<int> &arr) 
    {
        unordered_set<int> s(arr.begin(),arr.end());
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(s.find(arr[i]-1)==s.end())
            {
                int x=arr[i];
                while(s.find(x)!=s.end())
                    x++;
                c++;
            }
        }
        return c;
    }
};

//QUESTION 6
class Solution {
  public:
    string shift(string s)
    {
        string ans="";
        if(s.size()<=1)
            return ans;
        for(int i=1;i<s.size();i++)
        {
            int r=(s[i]-s[i-1]+26)%26;
            ans+=to_string(r)+',';
        }
        return ans;
        
    }
    vector<vector<string>> groupShiftedString(vector<string> &arr) 
    {
        unordered_map<string,vector<string>> m;
        for(string s: arr)
        {
            string a=shift(s);
            m[a].push_back(s);
        }
        
        vector<vector<string>> ans;
        for(auto p:m)
            ans.push_back(p.second);
        return ans;
    }
};
