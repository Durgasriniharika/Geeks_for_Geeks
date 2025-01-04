//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        unordered_map<int,int>mp;
        int count=0;
        mp[arr[0]]++;
        for(int i=1;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                int sum=arr[i]+arr[j];
                if(mp.find(target-sum)!=mp.end()){
                    count+=mp[target-sum];
                }
            }
            mp[arr[i]]++;
        }
        return count;
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends