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
        long long k;
        cin >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        int count = 0;
        int l = 0, r = n-1;
        while(l <= r){
            if(l == r){
                if(k >= a[l]){
                    count++; }
                break; }
            if(a[l] < a[r]){
                if(k >= 2*a[l]){
                    k -= 2*(a[l]);
                    a[r] -= a[l];
                    count++;
                    l++; }
                else{
                    break; }}
            else if(a[l] > a[r]){
                if(k >= 2*a[r]){
                    k -= 2*(a[r]);
                    a[l] -= a[r];
                    count++;
                    r--; }
                else{
                    break; }}
            else{ 
                if(k >= 2 * a[r]){
                    k -= 2 * a[r];
                    count += 2; 
                    l++;
                    r--; } 
                else{
                    break; }}}
        if(l < r && a[l] <= (k/2)+(k%2)){
            count++; }
        cout << count << endl; 
    }
    return 0;
}


