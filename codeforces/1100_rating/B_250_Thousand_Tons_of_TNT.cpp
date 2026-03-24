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
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        vector<long long> pf(n+1, 0);
        pf.push_back(a[0]);
        for(int i = 0; i < n; i++){
            pf[i+1] = a[i] + pf[i]; }
        vector<long long> divisors;
        vector<long long> diff;
        for(int i = 1; i <= sqrt(n); i++){
            if(n%i == 0){
                divisors.push_back(i);
                if(i != n/i){
                    divisors.push_back(n/i); }}}
        long long maxi = 0;
        for(int i = 0; i < divisors.size(); i++){
            if(divisors[i] == n){
                continue; }
                vector<long long> curr_tracks;
            for(int j = divisors[i]; j <= n; j += divisors[i]){
                curr_tracks.push_back(pf[j] - pf[j-divisors[i]]); }
                sort(curr_tracks.begin(), curr_tracks.end());
                long long curr_diff = curr_tracks.back() - curr_tracks.front();
                if(curr_diff > maxi){
                    maxi = curr_diff; }}
        cout << maxi << endl;
    }
    return 0;
}


