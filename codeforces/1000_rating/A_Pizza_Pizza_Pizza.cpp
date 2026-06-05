#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        long long n;
        cin >> n;
        long long ans = n+1;
        if(n == 0){
            cout << 0 << endl; }
        else{
            if(ans%2 == 0){
                cout << ans/2 << endl; }
            else{
                cout << ans << endl; }}
    }
    return 0;
}


