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
        vector<int> ans;
        int cnt_neg = 0;
        int sol = 0;
        for(int i = 0; i < n; i++){
            if(a[i] < 0){
                cnt_neg++; }
            if(cnt_neg >= 3){
                cnt_neg = 1;
                ans.push_back(sol); 
                sol = 0; }
            sol++; }
        ans.push_back(sol);
        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " "; }
        cout << endl;
    }
    return 0;
}


