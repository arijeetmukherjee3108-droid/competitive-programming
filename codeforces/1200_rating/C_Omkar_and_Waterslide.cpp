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
        long long diff = 0;
        for(int i = 0; i < n-1; i++){
            if(a[i+1] < a[i]){
                diff += a[i]-a[i+1]; }}
        cout << diff << endl;
    }
    return 0;
}


