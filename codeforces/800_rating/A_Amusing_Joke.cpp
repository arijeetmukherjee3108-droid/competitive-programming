#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    string a, b, c;
    cin >> a >> b >> c;
        int hsh[26] = {0};
        for(int i = 0; i < a.length(); ++i){
            hsh[a[i] - 'A']++; }
        for(int i = 0; i < b.length(); ++i){
            hsh[b[i] - 'A']++; }
        for(int i = 0; i < c.length(); ++i){
            hsh[c[i] - 'A']--; }
        int isValid = 1; 
        for(int i = 0; i < 26; ++i){
            if(hsh[i] != 0){
                isValid = 0;
                break; }}
        if(isValid == 1){
            cout << "YES" << endl; }
        else{
            cout << "NO" << endl; }
    return 0;
}