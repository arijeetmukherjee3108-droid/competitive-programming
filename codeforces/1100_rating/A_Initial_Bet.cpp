#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        int c1,c2,c3,c4,c5;
        cin >> c1 >> c2 >> c3 >> c4 >> c5;
        int sum = c1 + c2 + c3 + c4 + c5;
        if(sum == 0){
            cout << -1 << endl; }
        else{
            if(sum%5 == 0){
                cout << sum/5 << endl; }
            else{
                cout << -1 << endl; }}
    }
    return 0;
}


