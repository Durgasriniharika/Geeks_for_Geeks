//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return 0;
        if(arr[0]==0) return -1;
        
        
        int pos=0,end=0;
        
        int cnt=0;
        
        for(int i=0;i<n-1;i++){
            pos=max(pos,i+arr[i]);
            
            if(i==end){
                cnt++;
                end=pos;
                
                if(end>=n-1) return cnt;
            }
        }
        return -1;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends