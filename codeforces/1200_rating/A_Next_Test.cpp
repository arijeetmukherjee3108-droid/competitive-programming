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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        sort(a.begin(), a.end());
        int mex = 1;
        for(int i = 0; i < n; i++){
            if(a[i] == mex){
                mex++; }
            else if(a[i] > mex){
                break; }}
        cout << mex << endl;
    }
    return 0;
}


