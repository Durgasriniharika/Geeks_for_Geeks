class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int>res(a.begin(),a.end());
        for(int i=0;i<b.size();i++){
            res.push_back(b[i]);
        }
        
        unordered_set<int>st(res.begin(),res.end());
        vector<int>ans;
        for(auto it:st){
            ans.push_back(it);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};