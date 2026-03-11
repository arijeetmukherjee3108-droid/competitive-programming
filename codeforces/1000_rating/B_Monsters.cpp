#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<pair<int, int>> c;
        for(int i = 0; i < n; i++){
            long long a;
            cin >> a;
            int rem = a%k;
            if(rem == 0){ 
                rem = k; }
            c.push_back({rem, -(i+1)}); }
        sort(c.begin(), c.end());
        for(int i = n - 1; i >= 0; i--){
            cout << -c[i].second << " "; }
        cout << endl;
}
    return 0;
}