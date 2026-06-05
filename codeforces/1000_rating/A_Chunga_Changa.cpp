#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while(t--){
        long long x,y,z;
        cin >> x >> y >> z;
        long long rem1 = x%z;
        long long ans = x/z + y/z;
        long long rem2 = y%z;
        int flag = 0;
        if(rem1 + rem2 >= z){
            ans++;
            flag++; }
        if(flag == 0){
            cout << ans << " " << 0 << endl; }
        else{
            long long maxi = max(rem1, rem2);
            long long fin = z - maxi;
            cout << ans << " " << fin << endl; }
    }
    return 0;
}


