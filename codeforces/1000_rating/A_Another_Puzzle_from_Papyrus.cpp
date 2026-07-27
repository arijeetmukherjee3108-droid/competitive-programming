#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,c;
        cin >> n >> c;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        for(int i = 0; i < n; i++){
            cin >> b[i]; }
        vector<int> temp_b(n);
        vector<int> temp_a(n);
        for(int i = 0; i < n; i++){
            temp_b[i] = b[i]; }
        for(int i = 0; i < n; i++){
            temp_a[i] = a[i]; }
        int count = 0;
        sort(temp_a.begin(), temp_a.end());
        sort(temp_b.begin(), temp_b.end());
        for(int i = 0; i < n; i++){
            if(temp_b[i] > temp_a[i]){
                count = 1;
                break; }}
        if(count == 1){
            cout << -1 << endl; }
        else{
            int works = 1;
            long long ans = 0;
            for(int i = 0; i < n; i++){
                if(b[i] > a[i]){
                    works = 0; }
                ans += (a[i] - b[i]); }
            if(works == 1){
                cout << ans << endl; }
            else{
                cout << ans + c << endl; }
        }
    }
    return 0;
}


