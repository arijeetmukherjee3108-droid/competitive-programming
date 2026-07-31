#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        long long res = 0;
        long long c = 0;
        long long step = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '+'){
                c++;
                step++; }
            if(s[i] == '-'){
                c--; 
                step++;
                if(c == -1){
                    c = 0;
                    res += step;
                    step = 0;
                    res += i+1; }}}
        res += step;
        cout << res << endl;
}
    return 0;
}


