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
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        if(n%2 != 0){
            cout << "YES" << endl; }
        else{
            for(int i = 1; i < n-1; i++){
                long long diff = a[i-1] - a[i];
                a[i] += diff;
                a[i+1] += diff; }
            if(a[n-2] <= a[n-1]){
                cout << "YES" << endl; }
            else{
                cout << "NO" << endl; }}
}
    return 0;
}


