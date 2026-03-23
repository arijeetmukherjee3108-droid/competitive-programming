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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        int l = 0, r = n-1;
        long long sum_l = 0;
        long long sum_r = 0;
        int maxi = 0;
        while(l <= r){
            if(sum_l > sum_r){
                sum_r += a[r];
                r--; }
            else if(sum_l <= sum_r){
                sum_l += a[l];
                l++; }
            if(sum_l == sum_r){
                maxi = l + (n-1-r); }}
        cout << maxi << endl;
    }
    return 0;
}


