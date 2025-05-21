class Solution {
  public:
    int countSubstring(string &s) {
        // code here
        unordered_map<char,int>mp;
        int cnt=0;
        
        for(int i=0;i<s.size();i++){
            cnt+=mp[s[i]];
            mp[s[i]]++;
        }
                
        return cnt+s.size();
    }
};