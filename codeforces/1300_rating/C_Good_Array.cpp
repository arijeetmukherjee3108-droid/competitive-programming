#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        int n;
        cin >> n;
        vector<long long> hsh(1000005);
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        vector<long long> b;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
            hsh[a[i]]++; }
        for(int i = 0; i < n; i++){
            hsh[a[i]]--;
            long long rem_sum = sum - a[i];
            if(rem_sum%2 == 0 && rem_sum/2 <= 1000000 && hsh[rem_sum/2] > 0){
                b.push_back(i); }
            hsh[a[i]]++; }
        cout << b.size() << endl;
        for(int i = 0; i < b.size(); i++){
            cout << b[i]+1 << " "; }
        cout << endl;
    }
    return 0;
}


