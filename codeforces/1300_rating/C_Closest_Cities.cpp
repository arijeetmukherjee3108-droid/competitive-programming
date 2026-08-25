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
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }

        vector<long long> pref_L(n, 0);
        for(int i = 0; i < n-1; i++){
            if(i == 0){
                pref_L[i+1] = pref_L[i]+1; }
            else{
                if(a[i]-a[i-1] > a[i+1]-a[i]){
                    pref_L[i+1] = pref_L[i] + 1; }
                else{
                    pref_L[i+1] = pref_L[i] + (a[i+1]-a[i]); }}}

        vector<long long> pref_R(n, 0); 
        for(int i = n-1; i > 0; i--){
            if(i == n-1){
                pref_R[i-1] = pref_R[i] + 1; }
            else{
                if(a[i+1]-a[i] > a[i] - a[i-1]){
                    pref_R[i-1] = pref_R[i] + 1; }
                else{
                    pref_R[i-1] = pref_R[i] + (a[i]-a[i-1]); }}}
        int m;
        cin >> m;
        while(m--){
            int x,y;
            cin >> x >> y;
            if(x < y){
                cout << pref_L[y-1] - pref_L[x-1] << endl; }
            else{
                cout << pref_R[y-1] - pref_R[x-1] << endl; }}
}
    return 0;
}


