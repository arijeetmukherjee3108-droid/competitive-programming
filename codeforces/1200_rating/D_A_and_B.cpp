#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> pos_a, pos_b;
        for(int i = 0; i < n; i++){
            if(s[i] == 'a'){ 
                pos_a.push_back(i); }
            else{
                pos_b.push_back(i); }}
        long long swap = 0;
        int k_a = pos_a.size();
        if(k_a > 0){
            vector<int> p_a(k_a);
            for(int i = 0; i < k_a; i++){
                p_a[i] = pos_a[i] - i; }
            int med_a = p_a[k_a/2];
            for(int i = 0; i < k_a; ++i){
                swap += abs(p_a[i] - med_a); }}
        long long swaps_b = 0;
        int k_b = pos_b.size();
        if(k_b > 0){
            vector<int> p_b(k_b);
            for(int i = 0; i < k_b; ++i){
                p_b[i] = pos_b[i] - i; }
            int med_b = p_b[k_b / 2];
            for(int i = 0; i < k_b; ++i){
                swaps_b += abs(p_b[i] - med_b); }}
        cout << min(swap, swaps_b) << endl;
}
    return 0;
}