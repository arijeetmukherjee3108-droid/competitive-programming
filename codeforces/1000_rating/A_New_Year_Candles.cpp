#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while(t--){
        int a, b;
        cin >> a >> b;
        int hour = a;
        int s = a;
        while(s >= b){
            int can = s / b;     
            int rem = s % b;     
            hour += can;            
            s = can + rem; }
        cout << hour << endl;
    }
    return 0;
}


