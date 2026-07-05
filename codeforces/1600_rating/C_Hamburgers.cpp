#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        int b,sa,c;
        cin >> b >> sa >> c;
        int pb,ps,pc;
        cin >> pb >> ps >> pc;
        long long r;
        cin >> r;
        int count_b = 0, count_sa = 0, count_c = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                count_b++; }
            else if(s[i] == 'S'){
                count_sa++; }
            else if(s[i] == 'C'){
                count_c++; }}
        long long lo = 0;
        long long hi = 2e12;
        long long ans = 0;
        while(lo <= hi){
            long long mid = lo + (hi-lo)/2;
            long long need_b = max(0LL, mid*count_b - b);
            long long need_c = max(0LL, mid*count_c - c);
            long long need_sa = max(0LL, mid*count_sa - sa);
            long long price = pb*need_b + pc*need_c + ps*need_sa;
            if(price <= r){
                ans = mid;
                lo = mid+1; }
            else{
                hi = mid-1; }}
        cout << ans << endl;
    }
    return 0;
}


