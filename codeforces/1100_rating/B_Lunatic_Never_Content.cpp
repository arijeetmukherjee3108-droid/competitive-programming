#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        long long x = 0;
        for(int i = 0; i < n/2; i++){
            long long diff = abs(a[i] - a[n-i-1]);
            if(diff != 0){
                x = diff; 
                break; }}
        if(x != 0){
            for(int i = 0; i < n/2; i++){
                long long current_diff = abs(a[i] - a[n-i-1]);
                if(current_diff != 0){
                    x = __gcd(x, current_diff); }}}
        cout << x << endl;
    }
    return 0;
}