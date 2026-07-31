#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int a = -1, b = -1, c = -1;
        for(long long i = 2; i*i <= n; i++){
            if(n%i == 0){
                a = i;
                n /= a;
                break; }}
        if(a != -1){
            for(long long i = a+1; i*i <= n; i++){
                if(n%i == 0){
                    b = i;
                    c = n/b;
                    break; }}}
        if(a != -1 && b != -1 && c > b){
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl; }
        else{
            cout << "NO" << endl; }
}
    return 0;
}


