#include <bits/stdc++.h>
#define MaxBit 32
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        if((a&b) == a){
            cout << a << " " << b << endl; }
        else{
            cout << -1 << endl; }
}
    return 0;
}


    
