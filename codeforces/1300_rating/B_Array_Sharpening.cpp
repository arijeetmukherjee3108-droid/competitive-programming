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
        int b = -1;
        for(int i = 0; i < n; i++){
            if(a[i] >= i){
                b = i; }
            else{
                break; }}
        int c = n;
        for(int i = n-1; i >= 0; i--){
            if(a[i] >= n-i-1){
                c = i; }
            else{
                break; }}
        if(b >= c){
            cout << "Yes" << endl; }
        else{
            cout << "No" << endl; }         
    }
    return 0;
}


