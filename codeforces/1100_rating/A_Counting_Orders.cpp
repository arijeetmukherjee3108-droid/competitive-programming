#include <bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        for(int i = 0; i < n; i++){
            cin >> b[i]; }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        long long ans = 1;
        int c = 0;
        for(int i = 0; i < n; i++){
            while(c < n && a[c] > b[i]){
                c++; }
            long long d = c-i;
            if(d <= 0){
                ans = 0;
                break; }
            ans = (ans*d)%M; }
        cout << ans << endl;
    }
    return 0;
}


