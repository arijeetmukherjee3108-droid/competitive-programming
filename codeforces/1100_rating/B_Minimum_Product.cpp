#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long a,b,x,y,n;
        cin >> a >> b >> x >> y >> n;
        if(max(y, b-n) < max(x, a-n)){
            if(n >= b-y){
                n -= b-y;
                b = y; }
            else{
                b -= n;
                n = 0; } 
            if(n > 0){
                if(n >= a-x){
                    n -= a-x;
                    a = x; }
                else{
                    a -= n;
                    n = 0; }}}
        else{
            if(n >= a-x){
                n -= a-x;
                a = x; }
            else{
                a -= n;
                n = 0; } 
            if(n > 0){
                if(n >= b-y){
                    n -= b-y;
                    b = y; }
                else{
                    b -= n;
                    n = 0; }}}
        long long ans = (1LL)*(a)*(b);
        cout << ans << endl;
        
    }
    return 0;
}


