#include <bits/stdc++.h>
using namespace std;

long long next(long long n){
    long long temp = n;
    long long mini = 9;
    long long maxi = 0;
    while(temp > 0){
        long long nu = temp%10;
        mini = min(mini, nu);
        maxi = max(maxi, nu);
        if(mini == 0){
            break; }
        temp /= 10; }
    return n + (maxi*mini);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long a;
        cin >> a;
        long long k;
        cin >> k;
        for(int i = 1; i < k; i++){
            long long next_a = next(a);
            if(next_a == a){
                break; }
            a = next_a; }
        cout << a << endl;
    }
    return 0;
}


