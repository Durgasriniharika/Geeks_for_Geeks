//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(),a.end());
        
        int min_diff=INT_MAX;
        for(int i=0;i<=a.size()-m;i++){
            int mini=INT_MAX,maxi=INT_MIN;
            for(int j=i;j<i+m;j++){
                maxi=max(maxi,a[j]);
                mini=min(mini,a[j]);
            }
            min_diff=min(min_diff,maxi-mini);
        }
        return min_diff;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        int m;
        cin >> m;
        cin.ignore();
        Solution ob;
        cout << ob.findMinDiff(arr, m) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends