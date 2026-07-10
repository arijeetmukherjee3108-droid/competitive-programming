#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long x,y,k;
        cin >> x >> y >> k;
        while(k > 0){
            if(x == 1){
                k = k%(y-1);
                x += k;
                k = 0;
                break; }
            long long rem = y-(x%y);
            if(k >= rem){
                k -= rem;
                x += rem;
                while(x%y == 0){
                    x /= y; }}
            else{
                x += k;
                k = 0; }}
        cout << x << endl;
    }
    return 0;
}


