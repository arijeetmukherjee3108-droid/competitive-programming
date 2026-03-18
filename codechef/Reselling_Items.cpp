#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        sort(a.begin(), a.end());
        int temp = k;
        int profit = 0, loss = 0;
        int idx = -1;
        for(int i = n-1; i >= 0; i--){
            if(a[i] > 5 && temp > 0){
                loss += 5;
                profit += a[i];
                temp--; 
                idx = i-1; }
            else{
                idx = i;
                break; }}
        if(temp == 0){
            for(int i = idx; i >= 0; i--){
                if(a[i] > 10){
                    loss += 10;
                    profit += a[i]; }
                else{
                    break; }}}
        cout << profit - loss << endl; 
    }
    return 0;
}


