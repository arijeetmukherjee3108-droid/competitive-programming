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
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        string s;
        cin >> s;
        vector<long long> bl;
        vector<long long> r;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                bl.push_back(a[i]); }
            else{
                r.push_back(a[i]); }}
        sort(bl.begin(), bl.end());
        sort(r.begin(), r.end());
        bool sol = true;
        for(int i = 0; i < bl.size(); i++){
            if(bl[i] < i+1){
                sol = false;
                break; }}      
        int c = bl.size()+1;
        for(int i = 0; i < r.size(); i++){
            if(r[i] > c+i){
                sol = false;
                break; }}
        if(sol){
            cout << "YES" << endl; }
        else{
            cout << "NO" << endl; }
}
    return 0;
}


