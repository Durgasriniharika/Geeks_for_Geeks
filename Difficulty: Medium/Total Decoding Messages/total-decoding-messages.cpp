//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solve(string &digits,int i,vector<int>&dp){
        if(i==digits.size()) return 1;
        if(digits[i]=='0') return 0;
        if(dp[i]!=-1) return dp[i];
        int way=solve(digits,i+1,dp);
        if(i<digits.size()){
            int num=stoi(digits.substr(i,2));
            if(num>=10 && num<=26){
                way+=solve(digits,i+2,dp);
            }
        }
        return dp[i]=way;
    }
    int countWays(string &digits) {
        vector<int>dp(digits.size(),-1);
        int res=solve(digits,0,dp);
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string digits;
        getline(cin, digits);
        Solution obj;
        int ans = obj.countWays(digits);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends