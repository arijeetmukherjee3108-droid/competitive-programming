#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int d,s;
    cin >> d >> s;
    int sum_hi = 0;
    int sum_lo = 0;
    vector<int> ans;
    vector<int> diff;
    while(d--){
        int low,hi;
        cin >> low >> hi;
        sum_lo += low;
        sum_hi += hi;
        diff.push_back(hi - low);
        ans.push_back(low); }
    if(s >= sum_lo && s <= sum_hi){
        s -= sum_lo;
        cout << "YES" << endl;
        for(int i = 0; i < ans.size(); i++){
            if(s <= 0){
                break; }
            int add = min(s, diff[i]);
            ans[i] += add;
            s -= add; }
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " "; }
        cout << endl; }
    else{
        cout << "NO" << endl; }
    return 0;
}


