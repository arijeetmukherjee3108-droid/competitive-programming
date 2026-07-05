#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int lo = 1;
        int hi = n*n;
        vector<vector<int>> a(n+1, vector<int>(n+1));
        for(int i = 1; i <= n; i++){
            if(i%2 != 0){
                for(int j = 1; j <= n; j++){
                    if(j%2 != 0){
                        a[i][j] = lo;
                        lo++; }
                    else{
                        a[i][j] = hi;
                        hi--; }}}
            else{
                for(int j = n; j >= 1; j--){
                    if(j%2 == 0){
                        a[i][j] = lo;
                        lo++; }
                    else{
                        a[i][j] = hi;
                        hi--; }}}}
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cout << a[i][j] << " "; }
            cout << endl; }
    }
    return 0;
}


