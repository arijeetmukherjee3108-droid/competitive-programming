#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        int cnt_even = 0, cnt_odd = 0;
        for(int i = 0; i < n; i++){
            if(a[i]%2 == 0){
                cnt_even++; }
            if(a[i]%2 != 0){
                cnt_odd++; }}
        if(cnt_even > 0){
            if(a[0]%2 == 0 || a[n-1]%2 == 0){
                cout << "No" << endl; }
            else{
                if(n%2 == 0){
                    cout << "No" << endl; }
                else{
                    cout << "Yes" << endl; }}}
        else{
            if(n%2 == 0){
                cout << "No" << endl; }
            else{
                cout << "Yes" << endl; }}
    }
    return 0;
}


