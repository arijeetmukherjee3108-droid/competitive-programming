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
        int count = 0;
        int ans = 0;
        int tar = a[n-1];
        int i = n-1;
        while(i >= 0){
            if(a[i] == tar){
                count++;
                i--; }
            else{
                ans++;
                i -= count;
                count *= 2; }}
        cout << ans << endl;
    }
    return 0;
}


