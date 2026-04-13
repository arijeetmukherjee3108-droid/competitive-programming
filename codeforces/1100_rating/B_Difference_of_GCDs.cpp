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
        long long l,r;
        cin >> n >> l >> r;
        vector<long long> a(n+1);
        int count = 0;
        for(int i = 1; i <= n; i++){
            long long val = ((i + l - 1)/i)*i;
            if(val <= r){
                a[i] = val; }
            else{
                count++;
                break; }}
        if(count > 0){
            cout << "NO" << endl; }
        else{
            cout << "YES" << endl;
            for(int i = 1; i <= n; i++){
                cout << a[i] << " "; }
            cout << endl;}
}
    return 0;
}