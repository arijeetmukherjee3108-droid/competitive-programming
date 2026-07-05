#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        sort(a.begin(), a.end());
        long long ans = a[k-1];
        if(k == n){
            cout << a[k-1] << endl; }
        else if(k == 0){
            if(a[0] > 1){
                cout << 1 << endl; }
            else{
                cout << -1 << endl; }}
        else{
            if(a[k-1] == a[k]){
                cout << -1 << endl; }
            else{
                cout << a[k-1] << endl; }}
    }
    return 0;
}


