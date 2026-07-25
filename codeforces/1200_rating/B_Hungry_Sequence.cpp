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
        for(int i = 0; i < n; i++){
            cout << n+i+1 << " "; }
    }
    return 0;
}