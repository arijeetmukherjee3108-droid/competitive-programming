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
        long long first = max(a[0], a[n-1]);
        long long cost = 0, curr = 0;
        for(int i = 0; i < n-1; i++){
            long long maxi = max(a[i], a[i+1]);
            cost += maxi;
            if(curr < maxi){
                curr = maxi; }}
        cost -= curr;
        cost += first;
        cout << cost << endl;
    }
    return 0;
}


