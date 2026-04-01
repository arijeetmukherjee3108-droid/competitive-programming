#include <bits/stdc++.h>
using namespace std;
const int b = 80005;
long long hsh[b]; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i <= 2*n; i++){
            hsh[i] = 0; }
        long long ans = 0;
        for(int i = 1; i <= n; i++){
            int a;
            cin >> a;
            int c = a - i + n;  
            ans += hsh[c];
            hsh[c]++; }
        cout << ans << endl;
    }
    return 0;
}