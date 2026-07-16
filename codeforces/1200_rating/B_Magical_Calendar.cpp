#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){ 
        long long n,r;
        cin >> n >> r;
        long long ans = 0;
        if(r >= n){
            ans = ((1LL)*(n)*(n-1)/2) + 1; } 
        else{
            ans = ((1LL)*(r)*(r+1)/2); }
        cout << ans << endl;
    }
    return 0;
}


