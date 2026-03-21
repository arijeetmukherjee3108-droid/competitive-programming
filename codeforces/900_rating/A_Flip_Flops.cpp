#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        long long c,k;
        cin >> n >> c >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        sort(a.begin(), a.end());
        long long sum = 0;
        for(int i = 0; i < n; i++){
            if(a[i] <= c){
                long long b = c - a[i];
                long long d = min(k, b);
                a[i] += d;
                k -= d;
                c += a[i]; }
            else{
                continue; }}
        cout << c << endl; 
    }
    return 0;
}


