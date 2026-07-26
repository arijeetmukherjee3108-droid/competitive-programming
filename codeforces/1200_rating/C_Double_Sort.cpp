#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        for(int i = 0; i < n; i++){
            cin >> b[i]; }
        vector<int> temp_a = a;
        sort(temp_a.begin(), temp_a.end());
        vector<int> temp_b = b;
        sort(temp_b.begin(), temp_b.end());
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(a[i] > a[j]){
                    v.push_back({i + 1, j + 1});
                    swap(a[i], a[j]);
                    swap(b[i], b[j]); }}}
        int count = 0;
        for(int i = 0; i < n; i++){
            if(b[i] != temp_b[i]){
                count++;
                break; }}
        if(count > 0){
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(b[i] > b[j]){
                        v.push_back({i + 1, j + 1});
                        swap(a[i], a[j]);
                        swap(b[i], b[j]); }}}
            int count2 = 0;
            for(int i = 0; i < n; i++){
                if(a[i] != temp_a[i]){
                    count2++;
                    break; }}
            if(count2 > 0){
                cout << -1 << endl; }
            else{
                cout << v.size() << endl;
                for (int i = 0; i < v.size(); i++) {
                    cout << v[i].first << " " << v[i].second << endl; }}} 
        else{
            cout << v.size() << endl;
            for(int i = 0; i < v.size(); i++){
                cout << v[i].first << " " << v[i].second << endl; }}
}
    return 0;
}