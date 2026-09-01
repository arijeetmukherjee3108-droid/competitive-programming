#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        long long cost = 0;
        vector<int> hsh(26, 0);
        for(int i = 0; i < n; i++){
            hsh[s[i]-'A']++; }
        sort(hsh.begin(), hsh.end());
        reverse(hsh.begin(), hsh.end());
        for(int i = 0; i < 26; i++){
            if(hsh[i] >= k){
                cost += (1LL)*(k)*(k);
                k = 0; }
            else{
                cost += (1LL)*(hsh[i])*(hsh[i]);
                k -= hsh[i]; }
            if(k == 0){
                break; }}
        cout << cost << endl;
    }
    return 0;
}


