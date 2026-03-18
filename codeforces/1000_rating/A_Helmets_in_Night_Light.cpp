#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,p;
        cin >> n >> p;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }

        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i]; }

        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            v.push_back({b[i],a[i]}); }
        sort(v.begin(), v.end());

        int people = 1;
        int rem_n= n-1;
        long long cost = p;

        for(int i = 0; i < v.size(); i++){
            if(rem_n <= 0){
                break; }
            if(v[i].first <= p){
                if(v[i].second >= rem_n){
                    cost += (long long)(rem_n)*(v[i].first);
                    rem_n = 0;
                    break; }
                else{
                    cost += (long long)(v[i].first)*(v[i].second);
                    rem_n -= v[i].second; }}
            else{
                cost += (long long)rem_n*p;
                rem_n = 0;
                break; }}
        if(rem_n > 0){
            cost += (long long)rem_n*p; }
        cout << cost << endl;
    }
    return 0;
}


