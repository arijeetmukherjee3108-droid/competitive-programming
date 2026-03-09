// using recursion
int binExpRec(int a, int b){
    if(b==0) return 1;
    long long res = binExpRec(a,b/2);
    if(b&1){
        return (a*((res * 1LL * res)%M))%M }
    else{
        return (res * 1LL * res)%M; }
}

// using iterator
int binExpIter(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans *= a; }
        a = a*a;
        b >>= 1;
    }
    return ans;
}
