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
        long long gcd_1 = 0, gcd_2 = 0;
        for(int i = 0; i < n; i += 2){
            gcd_1 = gcd(gcd_1,a[i]); }
        for(int i = 1; i < n; i += 2){
            gcd_2 = gcd(gcd_2,a[i]); }
        int count = 0;
        for(int i = 1; i < n; i+=2){
            if(a[i]%gcd_1 == 0){
                count++;
                break; }}
        if(count == 0){
            cout << gcd_1 << endl; }
        else{
            int count_2 = 0;
            for(int i = 0; i < n; i+=2){
            if(a[i]%gcd_2 == 0){
                count_2++;
                break; }}
            if(count_2 == 0){
                cout << gcd_2 << endl; }
            else{
                cout << 0 << endl; }}
    }
    return 0;
}


