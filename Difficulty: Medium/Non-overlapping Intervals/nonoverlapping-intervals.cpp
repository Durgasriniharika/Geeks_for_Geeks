//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        int removal=0;
        
        vector<vector<int>>ans;
        
        for(int i=0;i<intervals.size();i++){
            
            if(ans.empty() || ans.back()[1]<=intervals[i][0]){
                
                ans.push_back(intervals[i]);
            }
            
            else{
                
                removal++;
                
                ans.back()[1]=min(ans.back()[1],intervals[i][1]);
            }
        }
        return removal;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(intervals) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends