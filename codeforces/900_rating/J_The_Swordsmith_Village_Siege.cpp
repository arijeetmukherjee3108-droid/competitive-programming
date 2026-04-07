#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        long long a[n];
        long long b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        for(int i = 0; i < n; i++){
            cin >> b[i]; }
        sort(a, a+n);
        sort(b, b+n);
        reverse(b, b+k);
        long long maxi = 0;
        for(int i = 0; i < k; i++){
            int c = a[i] + b[i];
            if(c > maxi){
                maxi = c; }}
        cout << maxi << endl;
    }
    return 0;
}


