#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        int tar = a[0];
        int mini = n; 
        int curr = 0;
        bool all_same = true;
        for(int i = 0; i < n; i++){
            if(a[i] == tar){
                curr++; }
            else{
                all_same = false;
                mini = min(mini, curr);
                curr = 0; }}
        mini = min(mini, curr);
        if(all_same){
            cout << -1 << endl; }
        else{
            cout << mini << endl; }
}    
    return 0;
}