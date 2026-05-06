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
        long long x;
        cin >> x;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        sort(a.begin(), a.end());
        long long sum = 0;
        long long count = 0;
        for(int i = n-1; i >= 0; i--){
            sum += a[i];
            if(sum >= x*(count+1)){
                count++; }
            else{
                break; }}
        cout << count << endl;
    }
    return 0;
}


