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
        vector<int> a(n+1);
        vector<int> b(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i]; }
        for(int i = 1; i <= n; i++){
            cin >> b[i]; }        
        vector<pair<int, int>> ans;
        bool flag = true;
        while(flag){
            flag = false;
            for(int i = 1; i <= n; i++){
                if(a[i] > b[i]){
                    swap(a[i], b[i]);
                    ans.push_back({3,i});
                    flag = true; }}

            for(int i = 1; i < n; i++){
                if(a[i] > a[i+1]){
                    swap(a[i], a[i+1]);
                    ans.push_back({1,i});
                    flag = true; }}

            for(int i = 1; i < n; i++){
                if(b[i] > b[i+1]){
                    swap(b[i], b[i+1]);
                    ans.push_back({2,i});
                    flag = true; }}}
            cout << ans.size() << endl;
            for(auto sol : ans){
                cout << sol.first << " " << sol.second << endl; }
}
    return 0;
}


