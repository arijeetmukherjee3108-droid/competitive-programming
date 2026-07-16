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
        if(n % 2 == 1 && n != 1){
            cout << -1 << endl; } 
        else{
            for(int i = 1; i <= n; i++){
                if(i % 2 != 0){ 
                    if(i == 1){
                        cout << n << " "; }
                    else{
                        cout << i - 1 << " "; }} 
                else{ 
                    cout << n - i + 1 << " "; }}
            cout << endl; }
    }
    return 0;
}