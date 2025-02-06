//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

vector<int> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    vector<int> res;
    while (ss >> num) {
        res.push_back(num);
    }
    return res;
}


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:

    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> &q, int k) {
        // code here
        if(q.empty() || k>q.size() || k<=0) return q;
        //int n=q.size();
        stack<int>s;
        for(int i=0;i<k;i++){
                s.push(q.front());
                q.pop();
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        //int rem=n-k;
        for(int i=0;i<q.size()-k;i++){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        int k;
        cin >> k;
        cin.ignore();
        queue<int> q;
        vector<int> v = inputLine();
        for (auto it : v)
            q.push(it);
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends