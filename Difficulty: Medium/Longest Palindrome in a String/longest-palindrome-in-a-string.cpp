//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int st,end,len=0;
    void findSubstrs(string s,int left, int right){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        left+=1,right--;
        if(len<right-left+1){
            len=right-left+1;
            st=left;
            end=right;
        }
    }
    string longestPalindrome(string &s) {
        
        int n=s.size();
       for(int i=0;i<n;i++){
            findSubstrs(s,i,i+1); //for even size
            findSubstrs(s,i,i);  //for odd size
       }
       return s.substr(st,end-st+1);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends