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
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        int sum = a[0];
        int maxi = a[0];
        for(int i = 0; i < n-1; i++){
            if(a[i]%2 == 0 && a[i+1]%2 == 0){
                sum = a[i+1];
                maxi = max(maxi, sum);
                continue; }
            else if(a[i]%2 != 0 && a[i+1]%2 != 0){
                sum = a[i+1];
                maxi = max(maxi, sum);
                continue; }
            else{
                if(sum < 0){
                    sum = a[i+1]; }
                else{
                    sum += a[i+1]; }}
            maxi = max(maxi, sum);
        }
        cout << maxi << endl;
    }
    return 0;
}