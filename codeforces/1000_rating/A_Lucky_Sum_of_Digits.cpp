#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while(t--){
        int n;
        cin >> n;
        int count_7 = 0;
        int count_4 = 0;
        while(n >= 0){
            if(n%7 == 0){
                count_7 = n/7;
                n = 0;
                break; }
            n -= 4;
            count_4++; }
        if(n < 0){
            cout << -1 << endl; }
        else{
            for(int i = 0; i < count_4; i++){
                cout << 4; }
            for(int i = 0; i < count_7; i++){
                cout << 7; }
            cout << endl; }
    }
    return 0;
}


