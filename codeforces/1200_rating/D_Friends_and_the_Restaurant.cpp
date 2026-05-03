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
        vector<long long> x(n);
        vector<long long> y(n);
        for(int i = 0; i < n; i++){
            cin >> x[i]; }
        for(int i = 0; i < n; i++){
            cin >> y[i]; }
        vector<long long> diff(n);
        for(int i = 0; i < n; i++){
            diff[i] = y[i] - x[i]; }
        sort(diff.begin(), diff.end());
        int left = 0;
        int right = n-1;
        int ans = 0;
        while(left < right){
            if(diff[left]+diff[right] >= 0){
                ans++;
                left++;
                right--; }
            else{
                left++; }}
        cout << ans << endl;
    }
    return 0;
}


