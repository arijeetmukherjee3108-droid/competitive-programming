#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    int maxi = 0;
    int mini = 101;
    int maxi_i = 0;
    int mini_i = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] > maxi){
            maxi = a[i];
            maxi_i = i; }
        if(a[i] <= mini){
            mini = a[i];
            mini_i = i; }}
    int ans = maxi_i + (n-1-mini_i);
    if(maxi_i > mini_i){
        ans--; }
    cout << ans << endl;
    return 0;
}