//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool isAnagram(string s1,string s2){
      if(s1.size()!=s2.size()) return false;
      sort(s1.begin(),s1.end());
      sort(s2.begin(),s2.end());
      
      return s1==s2;
  }
    vector<vector<string>> anagrams(vector<string>& arr) {
        vector<vector<string>>res;
        vector<bool>flag(arr.size(),false);
        for(int i=0;i<arr.size();i++){
            if(flag[i]) continue;
            vector<string>group;
            group.push_back(arr[i]);
            flag[i]=true;
            for(int j=i+1;j<arr.size();j++){
                if(!flag[j] && isAnagram(arr[i],arr[j])){
                    group.push_back(arr[j]);
                    flag[j]=true;
                }
            }
            res.push_back(group);
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends