class Solution {
  public:
    int maxSum(vector<int> &arr) {
        int n=arr.size();
        int maxi=arr[0]+arr[1];
        for(int i=1;i<n-1;i++){
            int a=arr[i];
            int b=arr[i+1];
            int sum=a+b;
            maxi=max(maxi,sum);
            
        }
        return maxi;
        
    }
};