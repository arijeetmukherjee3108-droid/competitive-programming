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
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        long long mini = 1e9 + 10;
        for(int i = 0; i < n; i++){
            if(mini > a[i]){
                mini = a[i]; }}
        if(a[0] == mini){
            cout << "Bob" << endl; }
        else{
            cout << "Alice" << endl; }
    }
    return 0;
}


