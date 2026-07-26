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
        int count = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        for(int i = 0; i < n; i++){
            if(a[i] == 1){
                count++; }}
        sort(a.begin(), a.end());
        int sol = 0;
        if(count > 0){
            for(int i = 0; i < n-1; i++){
                if(a[i]+1 == a[i+1]){
                    sol++; }}
            if(sol > 0){
                cout << "NO" << endl; }
            else{
                cout << "YES" << endl; }}
        else{
            cout << "YES" << endl; }
}
    return 0;
}