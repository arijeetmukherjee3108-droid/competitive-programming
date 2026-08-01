#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> f(n + 1);
        for(long long i = 1; i <= n; i++){
            cin >> f[i]; }
        vector<long long> a(n + 1);
        for(long long i = 2; i <= n - 1; i++){
            a[i] = (f[i-1] - 2*f[i] + f[i+1]) / 2; }
        long long mid = 0;
        for(long long i = 2; i <= n - 1; i++){
            mid += a[i] * (i - 1); }
        a[n] = (f[1]-mid)/(n-1);
        long long mid1 = 0;
        for(long long i = 2; i <= n - 1; i++){
            mid1 += a[i]*(n-i); }
        a[1] = (f[n] - mid1)/(n-1);
        for(long long i = 1; i <= n; i++){
            cout << a[i] << (i == n ? "" : " "); }
        cout << endl;
}
    return 0;
}