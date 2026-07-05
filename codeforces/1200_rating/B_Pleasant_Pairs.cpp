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
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i]; }
        long long count = 0;
        for(int i = 1; i <= n; i++){
            int start = a[i]-(i%a[i]);
            while(start <= i){
                start += a[i]; }
            for(int j = start; j <= n; j += a[i]){
                if(1LL*a[i]*a[j] == i+j){
                    count++; }}}
        cout << count << endl;
    }
    return 0;
}


