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
        vector<long long> a(n);
        vector<long long> pref(n);
        long long sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i]; }
        pref[0] = a[0];
        for(int i = 0; i < n-1; i++){
            pref[i+1] = a[i+1] + pref[i]; }
        if(sum == 0){
            int count = 0, idx = 0;
            for(int i = 0; i < n; i++){
                if(pref[i] < 0){
                    count++;
                    break; }
                if(pref[i] == 0){
                    idx = i;
                    break; }}
            for(int i = idx; i < n; i++){
                if(pref[i] != 0){
                    count++;
                    break; }}
            if(count > 0){
                cout << "No" << endl; }
            else{
                cout << "Yes" << endl; }}
        else{
            cout << "No" << endl; }
    }
    return 0;
}


