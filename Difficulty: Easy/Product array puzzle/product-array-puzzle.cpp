//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        
        int prefix_prod=1;
        int suffix_prod=1;
        vector<int>res(arr.size(),1);
        for(int i=0;i<arr.size();i++){
           res[i]=prefix_prod;
           prefix_prod*=arr[i];
        }
        for(int i=arr.size()-1;i>=0;i--){
            res[i]*=suffix_prod;
            suffix_prod*=arr[i];
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
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends