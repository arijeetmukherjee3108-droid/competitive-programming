#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0;
        long long mini = LLONG_MAX;
        int count_neg = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] < 0){ 
                count_neg++; }
            sum += abs(a[i]);
            if(abs(a[i]) < mini){
                mini = abs(a[i]); }}
        if(count_neg % 2 == 0){
            cout << sum << endl; }
        else{
            cout << sum - 2*mini << endl; }
    }
    return 0;
}