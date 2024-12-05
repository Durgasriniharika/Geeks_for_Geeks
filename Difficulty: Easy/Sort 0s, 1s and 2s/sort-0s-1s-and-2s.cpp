//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        
        int zero=count(arr.begin(),arr.end(),0);
        int one=count(arr.begin(),arr.end(),1);
        int two=count(arr.begin(),arr.end(),2);
        
        for(int i=0;i<zero;i++){
            arr[i]=0;
        }
        for(int i=zero;i<one+zero;i++){
            arr[i]=1;
        }
        for(int i=one+zero;i<one+zero+two;i++){
            arr[i]=2;
        }
       
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends