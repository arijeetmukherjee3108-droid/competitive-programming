#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int idx = -1;
        for(int i = 0; i < n-1; i++){
            if(s[i] <= s[i+1]){
                continue; }
            else{
                idx = i;
                break; }}
        if(idx != -1){
            cout << "YES" << endl;
            cout << idx+1 << " " << idx+2 << endl; }
        else{
            cout << "NO" << endl; }
    }
    return 0;
}


