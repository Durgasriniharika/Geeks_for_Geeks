//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        
        sort(arr.begin(),arr.end());
        
        int left=0,right=arr.size()-1;
        
       // int maxi=0;
        int mini=INT_MAX;
        vector<int>res;
    
        while(left<right){
                int sum=arr[left]+arr[right];
                
                int diff=abs(target-sum);
                
                if(diff<mini){
                    mini=diff;
                    res={arr[left],arr[right]};
                }
                
               
                if(sum>target){
                    right--;
                }
                else{
                    left++;
                }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends