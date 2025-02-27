//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    
    stack<int>st;
  stack<int>min_st;
  public:
  
    Solution() {
       
    }

    // Add an element to the top of Stack
    void push(int x) {
        st.push(x);
        
        if(min_st.empty() || x<=min_st.top()){
            min_st.push(x);
        }
    }

    // Remove the top element from the Stack
    void pop() {
       if(!st.empty()){
           if(st.top()==min_st.top()){
               min_st.pop();
           }
           st.pop();
       }
    }

    // Returns top element of the Stack
    int peek() {
        if(!st.empty()){
            return st.top();
        }
        return -1;
    }

    // Finds minimum element of Stack
    int getMin() {
        
       if(!min_st.empty()){
           return min_st.top();
       }
       return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Solution ob;

        while (q--) {
            int qt;
            cin >> qt;

            if (qt == 1) {
                // push
                int att;
                cin >> att;
                ob.push(att);
            } else if (qt == 2) {
                // pop
                ob.pop();
            } else if (qt == 3) {
                // peek
                cout << ob.peek() << " ";
            } else if (qt == 4) {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends