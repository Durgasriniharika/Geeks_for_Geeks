//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &arr) {
        int maxWater = 0;
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int height = std::min(arr[left], arr[right]);
        int width = right - left;
        maxWater = std::max(maxWater, height * width);

        if (arr[left] < arr[right])
            left++;
        else
            right--;
    }

    return maxWater;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends