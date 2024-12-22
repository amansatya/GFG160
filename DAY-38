class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int n) 
    {
        int r=mat.size(),c=mat[0].size(),s=0,e=c-1;
        while (s<r && e>=0)
        {
            if(n==mat[s][e])
                return true;
            else if (n<mat[s][e])
                e--;
            else
                s++;
        }
        return false;
    }
};
