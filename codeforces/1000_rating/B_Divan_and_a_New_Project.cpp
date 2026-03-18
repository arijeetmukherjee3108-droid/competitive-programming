#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
       vector<pair<int, int>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i + 1; }
        sort(a.rbegin(), a.rend());

        long long count = 1;
        long long cost = 0;
        long long count_2 = 1;

        vector<int> x(n+1);
        x[0] = 0;
        for(int i = 0; i < n; i += 2){
            x[a[i].second] = count;
            cost += (2LL)*count*a[i].first;
            count++; }
        for(int i = 1; i < n; i += 2){
            x[a[i].second] = (-1)*count_2;
            cost += (2LL)*count_2*a[i].first;
            count_2++; }

        cout << cost << endl;
        for(int i = 0; i <= n; i++){
            cout << x[i] << " "; }
        cout << endl;
        
    }
    return 0;
}


