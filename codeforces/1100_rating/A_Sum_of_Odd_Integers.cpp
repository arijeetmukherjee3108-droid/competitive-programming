#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        long long ans = (k)*(k);
        if(n%2 ==  k%2 && n >= ans){
            cout << "YES" << endl; }
        else{
            cout << "NO" << endl; }
    }
    return 0;
}


