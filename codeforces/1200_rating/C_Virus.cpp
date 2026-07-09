#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int m;
        cin >> m;
        vector<long long> a(m);
        for(int i = 0; i < m; i++){
            cin >> a[i]; }
        sort(a.begin(), a.end());
        vector<long long> diff(m);
        for(int i = 0; i < m-1; i++){
            diff[i] = a[i+1] - a[i] - 1; }
        diff[m-1] = (n - a[m-1]) + (a[0] - 1); 
        sort(diff.begin(), diff.end());
        reverse(diff.begin(), diff.end());
        int c = 0;
        long long ans_bef = 0; 
        for(int i = 0; i < m; i++){
            long long curr = diff[i] - c;
            if(curr <= 0){
                break; }
            if(curr == 1){
                ans_bef += 1;
                c += 2; }
            else{
                ans_bef += curr-1;
                c += 4; }}
        long long ans = n - ans_bef;
        cout << ans << endl;
    }
    return 0;
}


