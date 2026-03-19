#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> c;
        int mini = 2e9;
        for(int i = 0; i < n; i++){
            int m;
            cin >> m;
            vector<int> a(m);
            for(int j = 0; j < m; j++){
                cin >> a[j]; }
            sort(a.begin(), a.end());
            mini = min(mini, a[0]);
            c.push_back(a[1]); }
        sort(c.begin(), c.end());
        long long maxi = mini;
        for(int i = 1; i < n; i++){
            maxi += c[i]; }
        cout << maxi << endl;
}
    return 0;
}