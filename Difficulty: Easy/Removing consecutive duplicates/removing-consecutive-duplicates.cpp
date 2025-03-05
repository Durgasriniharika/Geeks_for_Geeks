//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string &s) {
        stack<int>st;
        for(char c:s){
            if(st.empty() || st.top()!=c){
                st.push(c);
            }
        }
        string res;
        while(!st.empty()){
            res=string(1,st.top())+res;
            st.pop();
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.removeConsecutiveDuplicates(s) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends