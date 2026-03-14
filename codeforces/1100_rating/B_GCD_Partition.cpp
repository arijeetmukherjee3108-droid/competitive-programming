#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long sum = 0;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i]; }
        long long maxi = 0;
        long long c = 0;
        for(int i = 0; i < n-1; i++){
            c += a[i];
            long long curr = __gcd(c, sum - c);
            maxi = max(maxi,curr); }
        cout << maxi << endl;
    }
    return 0;
}


