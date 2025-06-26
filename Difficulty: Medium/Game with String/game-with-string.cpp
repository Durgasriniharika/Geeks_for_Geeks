class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
       map<char,int>mp;
       for(char c:s){
           mp[c]++;
       }
       priority_queue<int>pq;
       for(auto it:mp){
           pq.push(it.second);
       }
       while(k-- && !pq.empty()){
           int top=pq.top();
           pq.pop();
           if(top>1) pq.push(top-1);
       }
       int ans=0;
       while(!pq.empty()){
           int val=pq.top();
           pq.pop();
           ans+=val*val;
       }
       return ans;
    }
};