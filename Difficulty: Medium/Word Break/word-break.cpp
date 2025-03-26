//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  /*
        1.state--> possibility to breaking the string from previous character to current character
        2.transistion--> searching any substring from previous true indexes+1 to current index from dictionary
        3.base case--> dp[0]=true
        4.final answer--> dp[n]
    */
    bool wordBreak(string &s, vector<string> &dictionary) {
       unordered_set<string>s1;
        for(string &word:dictionary){
            s1.insert(word);
        }

        int n=s.size();

        vector<bool>dp(n+1,false);

        dp[0]=true;
        
        int maxLen = 0;
        for (string &word : dictionary) {
            maxLen = max(maxLen, (int)word.size());
        }

        for(int i=1;i<=n;i++){
            for(int j=max(0, i - maxLen);j<i;j++){
                if(dp[j]==true){
                    string str=s.substr(j,i-j);
                    if(s1.count(str)){
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
        return dp[n];
        
    }
};


//{ Driver Code Starts.

vector<string> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<string> res;
    while (ss >> str) {
        res.push_back(str);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        cin.ignore();
        vector<string> dictionary = inputLine();

        Solution ob;
        if (ob.wordBreak(s, dictionary)) {
            cout << "true\n";
        } else
            cout << "false\n";
        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends