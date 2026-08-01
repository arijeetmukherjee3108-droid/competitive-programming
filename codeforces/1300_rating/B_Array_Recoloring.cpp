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
        int k;
        cin >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        vector<long long> temp = a;
        sort(temp.begin(), temp.end());
        int i = n-1;
        int count = 0;
        long long sum = 0;
        if(k > 1){
        while(count < k+1){
            sum += temp[i];
            i--;
            count++; }}
        else{
            long long b = temp[n-1];
            int idx = 0;
            for(int i = 0; i < n; i++){
                if(a[i] == b){
                    idx = i;
                    break; }}
            if(idx == 0 || idx == n-1){
                sum += temp[n-2];
                sum += temp[n-1]; }
            else{
                sum += temp[n-1];
                long long big = max(a[0], a[n-1]);
                sum += big; }}
        cout << sum << endl;
    }
    return 0;
}


