#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int maxi = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i]; }
    for(int i = 0; i < n; i++){
        if(a[i] > maxi){
            maxi = a[i]; }}
    int lo = 1, hi = 10000; 
    int ans = 0;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        long long eat = 0;
        for(int i = 0; i < n; i++){
            eat += (a[i] / mid); }
        if(eat >= m){
            ans = mid;
            lo = mid + 1; }
        else{
            hi = mid - 1; }}
    cout << ans << endl;
    return 0;
}