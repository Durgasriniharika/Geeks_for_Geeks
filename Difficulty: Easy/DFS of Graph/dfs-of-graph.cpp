//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void DFS(int u,vector<bool>& vis,vector<int>& ans,vector<vector<int>>& adj){
        vis[u]=1;
        ans.push_back(u);
        for(auto it:adj[u]){
            if(!vis[it]){
                DFS(it,vis,ans,adj);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<bool>vis(n,0);
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                DFS(i,vis,ans,adj);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V;
        cin >> V;
        cin.ignore();
        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < V; i++) {
            string input;
            getline(cin, input);
            int num;
            vector<int> node;
            stringstream ss(input);
            while (ss >> num) {
                node.push_back(num);
            }
            adj[i] = node;
        }

        Solution obj;
        vector<int> ans = obj.dfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends