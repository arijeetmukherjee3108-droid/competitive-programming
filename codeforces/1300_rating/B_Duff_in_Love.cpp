#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long a = 1;
    for(long long i = 2; i*i <= n; i++){
        if(n%i == 0){
            a *= i;   
            while(n%i == 0){
                n /= i; }}}
    if(n > 1){
        a *= n; }
    cout << a << endl;
    return 0;
}