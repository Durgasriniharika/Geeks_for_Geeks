//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    
cout << "~" << "\n";
}
return 0;
}


// } Driver Code Ends


string transform(string S){
    stack<pair<char,int>>st;
    for(auto ch:S){
        char c=tolower(ch);
        if(!st.empty() && st.top().first==c){
            st.top().second++;
        }
        else{
            st.push({c,1});
        }
    }
    string res="";
    while(!st.empty()){
        res=to_string(st.top().second)+st.top().first+res;
        st.pop();
    }
    return res;
}

