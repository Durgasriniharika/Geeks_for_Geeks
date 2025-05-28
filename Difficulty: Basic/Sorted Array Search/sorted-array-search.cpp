class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {

       int low=0,high=arr.size()-1;
       while(low<=high){
           int mid=low+(high-low)/2;
           if(arr[mid]==k){
               return true;
           }
           else if(arr[mid]<k){
               low=mid+1;
           }
           else{
               high=mid-1;
           }
       }
       return false;
        
    }
};