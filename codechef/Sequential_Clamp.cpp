#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;
            v.push_back({a, b}); }
        int y = 101; 
        for(int i = 0; i < n; i++){
            int ai = v[i].first;
            int bi = v[i].second;
            if(y < ai){
                y = ai; }
            else if(y > bi){
                y = bi; }}
        cout << y << endl;
    }
    return 0;
}