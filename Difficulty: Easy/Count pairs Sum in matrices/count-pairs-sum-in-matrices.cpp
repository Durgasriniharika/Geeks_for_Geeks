class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
    int n=mat1.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mp[mat2[i][j]]++;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            int a=mat1[i][j];
            int b=x-a;
            if (mp.find(b)!=mp.end()){
                cnt+=mp[b];
            }
        }
    }

    return cnt;
    }
};