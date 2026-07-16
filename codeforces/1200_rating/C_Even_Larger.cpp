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
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        long long count = 0;
        for(int i = 1; i < n-1; i += 2){
        long long sum = a[i-1] + a[i+1];
        if(sum > a[i]){ 
            long long diff = sum - a[i];
            count += diff;
            a[i+1] = max(0LL, a[i+1]-diff);
            diff -= a[i+1];
            if(diff > 0){
                a[i-1] -= diff; }
            diff = 0; }
        else{
            continue; }}
        if(n%2 == 0){
            if(a[n-1] < a[n-2]){
                count += a[n-2] - a[n-1]; }}
    cout << count << endl; 
    }
    return 0;
}


