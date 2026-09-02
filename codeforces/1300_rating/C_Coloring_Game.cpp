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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        long long ans = 0;
        for(int k = 2; k < n; k++){
            long long tar = max(a[k], a[n-1] - a[k]);
            int left = 0;
            int right = k-1;
            while(left < right){
                if(a[left]+a[right] > tar){
                    ans += (right-left);
                    right--; }
                else{
                    left++; }}}
            cout << ans << endl;
    }
    return 0;
}


