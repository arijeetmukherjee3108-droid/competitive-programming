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
        long long c;
        cin >> c;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        vector<int> b(n);
        for(int i = 0; i< n; i++){
            b[i] = a[i]+i+1; }
        sort(b.begin(), b.end());
        long long sum = 0;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(b[i] <= c - sum){
                sum += b[i];
                count++; }}
        cout << count << endl;
    }
    return 0;
}


