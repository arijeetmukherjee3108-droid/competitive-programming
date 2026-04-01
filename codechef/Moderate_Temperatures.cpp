#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.   tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        int maxi = 0;
        int mini = 105;
        for(int i = 0; i < n; i++){
            if(a[i] >= maxi){
                maxi = a[i]; }
            if(a[i] <= mini){
                mini = a[i]; }}
        int count = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == maxi || a[i] == mini){
                count++; }}
        cout << n - count << endl;
    }
    return 0;
}


