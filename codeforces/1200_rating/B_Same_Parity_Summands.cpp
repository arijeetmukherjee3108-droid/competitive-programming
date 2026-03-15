#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int k;
        cin >> k;
        if(k > n){
            cout << "NO" << endl; }
        else if(k == n){
            cout << "YES" <<endl;
            for(int i = 0; i < k; i++){
                cout << 1 << " "; }
            cout << endl; }
        else{
            if(n%k == 0){
                cout << "YES" << endl;
                for(int i = 0; i < k; i++){
                    cout << n/k << " "; }
                cout << endl; }
            else{
                long long rem_odd = n-(k-1);
                long long rem_even = n-2*(k-1);
                if(rem_odd > 0 && rem_odd%2 != 0){
                    cout << "YES" << endl;
                    for(int i = 0; i < k-1; i++){
                        cout << "1 "; }
                    cout << rem_odd << endl; }
                else if(rem_even > 0 && rem_even%2 == 0){
                    cout << "YES" << endl;
                    for(int i = 0; i < k-1; i++){
                        cout << "2 "; }
                    cout << rem_even << endl; }
                else{
                    cout << "NO" << endl; }}}
    }
    return 0;
}


