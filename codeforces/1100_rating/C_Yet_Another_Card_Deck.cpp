#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while(t--){
        int n,q;
        cin >> n >> q;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        vector<int> b(q);
        for(int i = 0; i < q; i++){
            cin >> b[i]; }
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            if(mp.count(a[i]) == 0){
                mp[a[i]] = i+1; }}
        for(int i = 0; i < q; i++){
            int tar = b[i];
            int card = mp[b[i]];
            cout << card << " ";
            for(auto &pair : mp){
                if(pair.second < card){
                    pair.second++; }}
                mp[b[i]] = 1; }
        cout << endl;
    }
    return 0;
}


