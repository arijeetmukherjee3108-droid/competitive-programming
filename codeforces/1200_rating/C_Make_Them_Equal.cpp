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
        char c;
        cin >> c;
        string s;
        cin >> s;
        vector<int> idx;
        int check = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == c){
                check++; }}       
        if(check == n){
            cout << 0 << endl; 
            continue; }
        int found = 0;
        for(int i = 1; i <= n; i++){
            int good = 1;
            for(int j = i; j <= n; j += i){
                if(s[j-1] != c){
                    good = 0;
                    break; }}
            if(good == 1){
                cout << 1 << endl;
                cout << i << endl; 
                found = 1;
                break; }}
        if(found == 0){
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl; }
    }
    return 0;
}