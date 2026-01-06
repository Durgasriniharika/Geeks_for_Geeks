class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int Xor=0;
        for(int i=0;i<k;i++){
            Xor^=arr[i];
        }
        int max_xor=Xor;
        for(int i=k;i<arr.size();i++){
            Xor=Xor^arr[i]^arr[i-k];
            max_xor=max(max_xor,Xor);
        }
        return max_xor;
        
    }
};