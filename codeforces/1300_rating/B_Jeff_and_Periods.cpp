#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, vector<int>> v;
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        for(int i = 0; i < n; i++){
            v[a[i]].push_back(i); }
        vector<pair<int, int>> b;
        for(auto it : v){
            int num = it.first;
            vector<int> idx = it.second;
            if(idx.size() > 2){
                int diff = idx[1] - idx[0];
                bool flag = true;
                for(int j = 1; j < idx.size(); j++){
                    if(idx[j] - idx[j-1] != diff){
                        flag = false; }}
                if(flag){
                    b.push_back({num, diff}); }}
            else if(idx.size() == 2){
                b.push_back({num, idx[1] - idx[0]}); }
            else if(idx.size() == 1){
                b.push_back({num, 0}); }}
        cout << b.size() << endl;
        for(auto pr : b){
            cout << pr.first << " " << pr.second << endl; }
    }
    return 0;
}


