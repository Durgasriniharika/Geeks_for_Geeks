class Solution {
  public:
    int sumSubstrings(string &s) {
        
       int n=s.size();
       long long sum=0;
       long long sub=0;
       for(int i=0;i<n;i++)
       {
           sub=(sub*10+(s[i]-'0')*(i+1));
           sum=(sum+sub);
       }
       return sum;
        
    }
};