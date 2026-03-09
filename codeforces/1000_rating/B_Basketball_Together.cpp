#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while(t--){
        int n;
        cin >> n;
        long long d;
        cin >> d;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        int l = 0;
        int r = n-1;
        int win = 0;
        while(l <= r){
            long long p = a[l];
            int k = d/p + 1;
            if(r-l >= k-1){
                win++;
                r -= (k-1);
                l++; }
            else{
                break; }}
        cout << win << endl;
    }
    return 0;
}


