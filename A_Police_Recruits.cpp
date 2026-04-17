#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int a = 0;
    int b = 0;
    for(int i = 0; i < n; i++){
            int c;
            cin >> c;
            if(c > 0){
                a += c; }
            else if(c == -1){
                if(a > 0){
                    a--; }
                else{
                    b++; }}}
        cout << b << endl;
    return 0;
}