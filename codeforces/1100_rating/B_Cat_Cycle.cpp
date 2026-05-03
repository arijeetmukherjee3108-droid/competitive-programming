#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        if(n%2 == 0){
            cout << (k-1)%n + 1 << endl; }
        else{
            long long mid = (n-1)/2;
            long long skips = (k-1)/mid;
            long long ans = (k-1+skips)%n + 1;
            cout << ans << endl; }
    }
    return 0;
}


