// User function Template for C++

bool prime(int n) {
    int i=1;
    int cnt=0;
    while(i<=n){
        if(n%i==0){
            cnt++;
        }
        i++;
    }
    if(cnt==2) {
        return true;
    }
    return false;
}