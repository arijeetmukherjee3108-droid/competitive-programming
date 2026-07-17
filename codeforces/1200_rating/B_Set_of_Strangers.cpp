#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<int> cost(n*m+1, 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                int x = a[i][j];
                cost[x] = max(cost[x], 1); }}
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int x = a[i][j];
                if(j + 1 < m && a[i][j+1] == x){
                    cost[x] = 2; }
                if(i + 1 < n && a[i+1][j] == x){
                    cost[x] = 2; }}}
        long long ans = 0;
        int maxi = 0;
        for(int i = 1; i <= n * m; i++){
            ans += cost[i];
            maxi = max(maxi, cost[i]); }
        cout << ans - maxi << endl;
    }
    return 0;
}