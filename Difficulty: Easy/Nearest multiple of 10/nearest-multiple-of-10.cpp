//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        
        int n=str.size();
        
       int rem=str[n-1]-'0';
       
         if(rem<=5){
             
             str[n-1]='0';
         }
         
         else{
             
             str[n-1]='0';
             
             int flag=0;
             
             for(int i=n-2;i>=0;i--){
                 
                 if(str[i]=='9'){
                     
                     str[i]='0';
                 }
                 else{
                     
                     str[i]+=1;
                     
                     flag=1;
                     
                     break;
                    
                 }
             }
             
             if(!flag){
                 
                 str='1'+str;
             }
         }
         
         return str;
       
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends