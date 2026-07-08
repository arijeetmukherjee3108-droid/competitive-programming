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
        string s;
        cin >> s;
        s = " " + s;
        long long total = 0;
        for(int i = 1; i <= n; i++){
            for(int j = i; j <= n; j += i){
                if(s[j] == '1'){
                    break; }
                else if(s[j] == '0'){
                    total += i;
                    s[j] = '2'; }}}
        cout << total << endl; 
    }
    return 0;
}


