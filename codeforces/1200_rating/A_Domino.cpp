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
        vector<int> lo;
        vector<int> hi;    
        int odd_hi = 0, odd_lo = 0;
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            hi.push_back(x);
            lo.push_back(y);
            if(x%2 != 0){ 
                odd_hi++; }
            if(y%2 != 0){
                odd_lo++; }}
        if(odd_hi%2 == 0 && odd_lo%2 == 0){
            cout << 0 << endl; }
        else if(odd_hi%2 != 0 && odd_lo%2 != 0){
            bool sol = false;
            for(int i = 0; i < n; i++){
                if((hi[i]%2 != 0 && lo[i]%2 == 0) || (hi[i]%2 == 0 && lo[i]%2 != 0)){
                    sol = true;
                    break; }}
            if(sol == true){
                cout << 1 << endl; }
            else{
                cout << -1 << endl; }}
        else{
            cout << -1 << endl; }
}
    return 0;
}