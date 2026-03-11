#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(m <= n){
            cout << abs(n-m) << endl;  }
        else{
            int count = 0;
            while(m > n){
                if(m % 2 == 0){
                    m /= 2; 
                    count++; }
                else{
                    m++;    
                    count++; }}
            cout << count + (n-m) << endl; }
    }
    return 0;
}