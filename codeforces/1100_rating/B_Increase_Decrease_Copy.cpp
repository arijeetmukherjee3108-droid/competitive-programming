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
        vector<long long> b(n+1);
        for(int i = 0; i < n+1; i++){
            cin >> b[i]; }
        long long sum = 0;
        long long mini = 2e9 + 10;
        int c = 0;
        for(int i = 0; i < n; i++){
            sum += abs(a[i] - b[i]);
            long long sol;
            if(b[n] >= min(a[i],b[i]) && b[n] <= max(a[i],b[i])){
                sol = 0; }
            else{
                sol = min(abs(a[i]-b[n]), abs(b[i]-b[n])); }
            if(mini > sol){
                mini = sol; }}
        cout << sum + mini + 1 << endl;
    }
    return 0;
}


