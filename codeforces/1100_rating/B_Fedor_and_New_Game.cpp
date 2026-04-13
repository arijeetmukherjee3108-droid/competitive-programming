#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> a(m+1);
        vector<int> v;
        int count = 0;
        for(int i = 0; i <= m; i++){
            int x;
            cin >> x;
            a[i] = x; }
        int c = a[m];
        for(int i = 0; i < m; i++){
            v.push_back(__builtin_popcount(a[i]^c)); }
        for(int i = 0; i < m; i++){
            if(v[i] <= k){
                count++; }}
        cout << count << endl;
}
    return 0;
}


