#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        string b;
        cin >> b;
        int x = a.length();
        int y = b.length();
        int maxi = 0;
        for(int i = 0; i < x; i++){
            for(int j = 1; i+j <= x; j++){
                string s = a.substr(i, j);
                if(b.find(s) != string::npos){
                    maxi = max(maxi, j); }}}
        int ans = (x + y) - 2*maxi;
        cout << ans << endl;
    }
    return 0;
}


