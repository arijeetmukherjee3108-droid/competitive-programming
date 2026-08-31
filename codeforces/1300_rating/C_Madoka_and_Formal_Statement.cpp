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
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        vector<long long> b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i]; }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                count++;
                break; }}
        if(count > 0){
            int count_0 = 0;
            for(int i = 0; i < n; i++){
                if(a[i] > b[i]){
                    count_0++;
                    break; }}
            for(int i = 0; i < n-1; i++){
                if(a[i] != b[i] && b[i]-b[i+1] > 1){
                    count_0++;
                    break; }}
            if(a[n-1] != b[n-1] && b[n-1]-b[0] > 1){
                count_0++; }
            if(count_0 > 0){
                cout << "NO" << endl; }
            else{
                cout << "YES" << endl; }}
        else{
            cout << "YES" << endl; }
    }
    return 0;
}


