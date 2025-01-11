//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        
        unordered_set<char>st;
        int maxi=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])!=st.end()){
                st.erase(s[count]);
                count++;
                i--;
            }
            else{
                st.insert(s[i]);
                 maxi=max(maxi,i-count+1);
            }
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends