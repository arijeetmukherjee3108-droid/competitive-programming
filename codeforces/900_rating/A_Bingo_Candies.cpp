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
        vector<vector<int>> v(n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int x;
                cin >> x;
                v[i].push_back(x); }}
        int b = n*n+1;
        vector<int> hsh(b, 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                hsh[v[i][j]]++; }}
        if(n == 1){
            cout << "NO" << endl;
            continue; }
        int count = 0;
        int limit = n*n - n;
        for(int i = 0; i < b; i++){
            if(hsh[i] > limit){
                count++;
                break; }}
        if(count > 0){
            cout << "NO" << endl; }
        else{
            cout << "YES" << endl; }
    }
    return 0;
}


