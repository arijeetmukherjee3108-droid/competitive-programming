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
        vector<long long> b_min;
        for(int i = 0; i < n; i++){
            cin >> a[i]; }

        for(int i = 0; i < n-1; i++){
            int mini = min(a[i],a[i+1]);
            b_min.push_back(mini); }

        for(int i = 1; i < n-1; i++){
            int req = 0;
            if(a[i] >= a[i+1] && a[i] <= a[i-1]){
                req = a[i]; }
            if(a[i] <= a[i+1] && a[i] >= a[i-1]){
                req = a[i]; }
            if(a[i-1] <= a[i+1] && a[i-1] >= a[i]){
                req = a[i-1]; }
            if(a[i-1] >= a[i+1] && a[i-1] <= a[i]){
                req = a[i-1]; }
            if(a[i+1] >= a[i] && a[i+1] <= a[i-1]){
                req = a[i+1]; }
            if(a[i+1] <= a[i] && a[i+1] >= a[i-1]){
                req = a[i+1]; }
            b_min.push_back(req); }
        sort(b_min.begin(), b_min.end());
        long long ans = b_min[b_min.size()-1];
        cout << ans << endl;
    }
    return 0;
}


