#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        vector<string> v;
        for(int i = 0; i < 9; i++){
            string s;
            cin >> s;
            v.push_back(s); }
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(v[i][j] == '1'){
                    v[i][j] = '2'; }}}
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cout << v[i][j]; }
            cout << endl; }
}
    return 0;
}


