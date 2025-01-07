//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int,int>mp;
       // mp[0]=1;
        int count=0;
        for(int i=0;i<arr.size();i++){
            //int pair_sum=arr[i]+arr[i+1];
            if(mp.find(target-arr[i])!=mp.end()){
                count+=mp[target-arr[i]];
            }
            mp[arr[i]]++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends