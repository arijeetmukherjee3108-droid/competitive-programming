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
        int a,b;
        cin >> a >> b;
        if(n > a*b){
            cout << -1 << endl;
            continue; }
        int odd = 1;
        int even = 2;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if((i+j)%2 == 0){
                    if(odd <= n){
                        cout << odd << " ";
                        odd += 2; }
                    else{
                        cout << 0 << " "; }}
                else{
                    if(even <= n){
                        cout << even << " ";
                        even += 2; }
                    else{
                        cout << 0 << " "; }}
            }
            cout << endl;
        }
    }
    return 0;
}


