class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        unordered_map<int,int>mp;
        int prefix=0;
        int count=0;
        mp[0]=1;
        for(int i=0;i<arr.size();i++){
            prefix+=arr[i];
            if(mp.find(prefix-k)!=mp.end()){
                count+=mp[prefix-k];
            }
            mp[prefix]++;
        }
        return count;
    }
};