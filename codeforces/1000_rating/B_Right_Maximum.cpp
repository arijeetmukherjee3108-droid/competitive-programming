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
        vector<int> a(n);
        vector<int> pref(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i == 0){
                pref[i] = a[i]; }
            else{
                pref[i] = max(pref[i-1], a[i]); }}
        int count = 0;
        int i = n-1;
        while(i >= 0){
            if(a[i] == pref[i]){
                count++; }
            i--; 
            while(i >= 0 && a[i] < pref[i]){
                i--; }}
        cout << count << endl;
    }
    return 0;
}