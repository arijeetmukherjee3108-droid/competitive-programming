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
        int count = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] != 0){
                count++; }}
        if(count > 0){
            long long maxi = 0;
            long long mini = 0;
            for(int i = 1; i < n; i++){
                if(a[i] > a[maxi]){
                    maxi = i; }
                if(a[i] < a[mini]){
                    mini = i; }}
            if(maxi == mini){
                maxi = 0;
                mini = 1; }
            long long x = 0;
            for(int i = 0; i < n; i++){
                if(i != maxi && i != mini){
                    x = i;
                    break; }}
            if(a[mini] + a[x] != a[maxi]){
                cout << mini+1 << " " << x+1 << " " << maxi+1 << endl; }
            else{
                cout << maxi+1 << " " << x+1 << " " << mini+1 << endl; }}
        else{
            cout << -1 << endl; }
}
    return 0;
}


