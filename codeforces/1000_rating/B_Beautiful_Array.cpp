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
        long long k,b,s;
        cin >> k >> b >> s;
        long long step_1 = (1LL)*(k)*(b);
        long long step_2 = step_1 + k-1;
        long long step_3 = (1LL)*(n-1)*(k-1);
        long long total_limit = step_2 + step_3;
        if(step_1 > s || s > total_limit){
            cout << -1 << endl; }
        else{
            long long last_val = min(s, step_2);
            long long rem_s = s-last_val;
            for(int i = 1; i <= n-1; i++){
                long long curr_val = min(rem_s, k-1);
                cout << curr_val << " ";
                rem_s -= curr_val; }
                    cout << last_val << endl; }   
    }
    return 0;
}


