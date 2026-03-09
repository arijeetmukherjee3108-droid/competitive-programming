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
        string s;
        cin >> s;
        vector<int> pref(n), suff(n);
        set<char> pr,su;
        for(int i = 0; i < n; i++){
            pr.insert(s[i]);
            pref[i] = pr.size(); }
        for(int i = n-1; i >= 0; i--){
            su.insert(s[i]);
            suff[i] = su.size(); }
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            ans = max(ans, pref[i] + suff[i+1]); }
        cout << ans << endl;
    }
    return 0;
}


