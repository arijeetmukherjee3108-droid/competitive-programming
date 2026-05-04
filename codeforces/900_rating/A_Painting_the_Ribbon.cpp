#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;    
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        int var = n/m;
        int ans = n - var;
        if(n%m != 0){
            ans--; }
        if(m == 2){
            if(n%2 == 0){
                if(k >= n/m){
                    cout << "NO" << endl; }
                else{
                    cout << "YES" << endl; }}
            else{
                if(k >= n/m){
                    cout << "NO" << endl; }
                else{
                    cout << "YES" << endl; }}}
        else if(k >= ans){
            cout << "NO" << endl; }
        else{
            cout << "YES" << endl; }
    }
    return 0;
}


