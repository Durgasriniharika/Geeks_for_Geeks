//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache {
  private:
  int capacity;
  int curr_time;
  unordered_map<int,pair<int,int>>mp;
  public:
    // Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap) : capacity(cap),curr_time(0){
        // code here
    }

    // Function to return value corresponding to the key.
    int get(int key) {
        if(mp.find(key)==mp.end()){
            return -1;
        }
        mp[key].second=curr_time++;
        return mp[key].first;
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            mp[key]={value,curr_time++};
        }
        else{
            if(capacity==mp.size()){
                int LRUkey=-1,mini=INT_MAX;
                for(auto it:mp){
                    if(it.second.second<mini){
                        mini=it.second.second;
                        LRUkey=it.first;
                    }
                }
                mp.erase(LRUkey);
            }
            mp[key]={value,curr_time++};
            
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);

        int queries;
        cin >> queries;
        while (queries--) {
            string q;
            cin >> q;
            if (q == "PUT") {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->put(key, value);
            } else {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends