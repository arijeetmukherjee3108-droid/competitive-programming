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
        long long k;
        cin >> k;
        vector<vector<int>> v(n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int a;
                cin >> a;
                v[i].push_back(a); }}
        long long count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(v[i][j] != v[n-i-1][n-j-1]){
                    count++; }}}
        count /= 2;
        if(count > k){
            cout << "NO" << endl; }
        else{
            long long rem = k-count;
            if(n%2 != 0 || rem%2 == 0){
                cout << "YES" << endl; }
            else{
                cout << "NO" << endl; }}
    }
    return 0;
}


