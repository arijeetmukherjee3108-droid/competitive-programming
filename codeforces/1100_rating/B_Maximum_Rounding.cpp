#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        s = '0' + s;
        int zero_pos = s.length();
        for(int i = s.length()-1; i >= 1; i--){
            if(s[i] >= '5'){
                s[i-1]++;
                zero_pos = i; }}
        for(int i = zero_pos; i < s.length(); i++){
            s[i] = '0'; }
        if(s[0] == '0'){
            cout << s.substr(1) << endl; }
        else{
            cout << s << endl; }
    }
    return 0;
}


