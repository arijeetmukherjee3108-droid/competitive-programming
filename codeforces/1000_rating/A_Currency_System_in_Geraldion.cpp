#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        sort(a.begin(), a.end());
        if(a[0] == 1){
            cout << -1 << endl; }
        else{
            cout << 1 << endl; }
    }
    return 0;
}


