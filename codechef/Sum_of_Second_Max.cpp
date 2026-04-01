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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        vector<vector<int>> sub;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){ 
                    vector<int> curr;
                    for(int k = i; k <= j; k++){
                        curr.push_back(a[k]); }
                sub.push_back(curr); }}
        for(int i = 0; i < sub.size(); i++){
            for(auto x: sub[i]){
                
            }
        }
        int maxi = INT_MIN;
        int sec_maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            if(a[i] > maxi){
                sec_maxi = maxi; 
                maxi = a[i]; }
            else if(a[i] > sec_maxi && a[i] != maxi){
                sec_maxi = a[i]; }}
}
    return 0;
}


