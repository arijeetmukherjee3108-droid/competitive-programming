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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        vector<bool> visited(n + 1,false);
        vector<int> b;
        int unused_ptr = 1;
        for(int i = 0; i < n; i++){
            if(!visited[a[i]]){
                b.push_back(a[i]);
                visited[a[i]] = true; }
            else{
                while(visited[unused_ptr]){
                    unused_ptr++; }
                b.push_back(unused_ptr);
                visited[unused_ptr] = true; }}
        for(int i = 0; i < n; i++){
            cout << b[i] << " "; }
        cout << endl;
    }
    return 0;
}