class Solution {
  public:
    int maxProfit(vector<int> &p) 
    {
        int fb=INT_MIN,fs=0,sb=INT_MIN,ss=0;  
        for (int i=0;i<p.size();i++) 
        {
            fb=max(fb,-p[i]);
            fs=max(fs,fb+p[i]);
            sb=max(sb,fs-p[i]);
            ss=max(ss,sb+p[i]);
        }
        return ss;
    }
};
