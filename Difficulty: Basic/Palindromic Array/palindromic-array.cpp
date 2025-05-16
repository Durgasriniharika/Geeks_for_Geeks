//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*Complete the function below*/

class Solution {
  public:
    bool ispalindrome(int n){
        string str=to_string(n);
        string rev=str;
        reverse(rev.begin(),rev.end());
        return rev==str;
    }
    bool isPalinArray(vector<int> &arr) {
       
       for(int i=0;i<arr.size();i++){
           if(!ispalindrome(arr[i])){
               return false;
           }
       }
        return true;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        cout << (ob.isPalinArray(arr) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends