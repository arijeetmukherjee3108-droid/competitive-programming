#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> p(m);
        for(int i = 0; i < m; i++){
            cin >> p[i]; }
        vector<vector<int>> pref(n+1, vector<int>(26,0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 26; j++){
                pref[i+1][j] = pref[i][j]; }
            pref[i+1][s[i]-'a']++; }
        vector<long long> hsh(26, 0);
        for(int i = 0; i < m; i++){
            int curr = p[i];
            for(int j = 0; j < 26; j++){
                hsh[j] += pref[curr][j]; }}
        for(int i = 0; i < 26; i++){
            hsh[i] += pref[n][i]; }
        for(int i = 0; i < 26; i++){
            cout << hsh[i] << " "; }
        cout << endl;
    }
    return 0;
}


