#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        long long sum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j]; }}
        for(int j = 0; j < m; j++){
            vector<int> col(n);
            for(int i = 0; i < n; i++){
                col[i] = a[i][j]; }
            sort(col.begin(), col.end());
            for(int i = 0; i < n; i++){
                sum += (1LL*i*col[i]) - (1LL*(n-i-1)*col[i]); }}
        cout << sum << endl;
    }
    return 0;
}


