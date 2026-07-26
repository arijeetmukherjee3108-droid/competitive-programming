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
        bool flag = true;
        for(int i = 0; i < n; i++){
            cin >> a[i]; 
            if(i > 0 && i < n-1 && a[i] != 1){
                flag = false; }}
        if(n == 3 && a[1]%2 != 0){
            cout << -1 << endl; }
        else if(flag){
            cout << -1 << endl; }
        else{
            long long ans = 0;
            for(int i = 1; i < n-1; i++){
                ans += (a[i]+1)/2; }
            cout << ans << endl; }
}
    return 0;
}