#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long l,r,a;
        cin >> l >> r >> a;
        long long ans1 = r/a + r%a;
        long long sol = r - (r%a) - 1;
        if(sol >= l){
            long long ans2 = sol/a + sol%a; 
        cout << max(ans1, ans2) << endl; }
        else{
            cout << ans1 << endl; }
    }
    return 0;
}


