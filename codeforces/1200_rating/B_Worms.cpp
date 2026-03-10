#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> pref(n);
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        if(i == 0){
            pref[i] = k; }
        else{
            pref[i] = pref[i-1] + k; }}
    int m;
    cin >> m;
    while(m--){
        int q;
        cin >> q;
        auto it = lower_bound(pref.begin(), pref.end(), q);
        cout << (it - pref.begin()) + 1 << endl; }
    return 0;
}