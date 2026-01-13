class Solution {
  public:
    bool canServe(vector<int> &arr) {
        int five_cnt=0,ten_cnt=0;
        
        for(auto it:arr){
            if(it==5){
                five_cnt++;
            }
            else if(it==10){
                if(five_cnt==0) return false;
                five_cnt--;
                ten_cnt++;
            }
            else if(it==20){
                if(ten_cnt>0 && five_cnt>0){
                    five_cnt--;
                    ten_cnt--;
                }
                else if(five_cnt>=3){
                    five_cnt-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
        
    }
};