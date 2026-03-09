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
        string s;
        cin >> s;
        string sma = s;
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 1; j < n-1; j++){
                if(sma[i] == '0' && sma[i-1] == '1' && sma[i+1] == '1'){
                    sma[i] = '1'; }}}
        string smi = sma;
        for(int i = 0; i < n; i++){
            for(int j = 1; j < n-1; j++){
                if(smi[i] == '1' && smi[i-1] == '1' && smi[i+1] == '1'){
                    smi[i] = '0'; }}}
        int maxi = 0;
        int mini = 0;
        for(int i = 0; i < n; i++){
            if(sma[i] == '1'){
                maxi++; }
            if(smi[i] == '1'){
                mini++; }}
        cout << mini << " " << maxi << endl;
    }
    return 0;
}


