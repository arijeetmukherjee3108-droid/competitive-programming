#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        vector<long long> a(k);
        for(int i = 0; i < k; i++){
            cin >> a[i]; }
        int count = 0, count_2 = 0;
        for(int i = 0; i< k; i++){
            if(a[i] >= 3){
                count++;
                break; }
            else if(a[i] == 2){
                count_2++; }}
        if(count > 0 || count_2 >= 2){
            cout << "YES" << endl; }
        else{
            cout << "NO" << endl; }
    }
    return 0;
}


