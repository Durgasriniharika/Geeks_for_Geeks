//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxPartitions(string &s) {
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
        }
        int cnt=0,maxi=0;
        for(int i=0;i<s.size();i++){
            maxi=max(maxi,mp[s[i]]);
            
            if(i==maxi){
                cnt++;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; ++i) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.maxPartitions(s) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends