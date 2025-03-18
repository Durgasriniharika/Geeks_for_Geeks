//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    
    bool solve(vector<int>& arr,int n,int sum){
        if(sum==0) return true;
        if(n==0 || sum<0) return false;
        
        return solve(arr,n-1,sum-arr[n-1])||solve(arr,n-1,sum);
    }
    bool equalPartition(vector<int>& arr) {
        int n=arr.size();
        
        int sum=accumulate(arr.begin(),arr.end(),0);
        if(sum%2!=0) return false;
        
        return solve(arr,n,sum/2);
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

        Solution ob;
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends