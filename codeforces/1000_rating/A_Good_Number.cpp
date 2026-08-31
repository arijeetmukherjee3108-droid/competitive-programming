#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        int i = 0;
        int wrong = 0;
        int count = 0;
        while(i < n){
            string s = to_string(a[i]);
            int m = s.length();
            bool seen[10] = {false};
            for(int j = 0; j < m; j++){
                seen[s[j] - '0'] = true; }
            for(int j = 0; j <= k; j++){
                if(!seen[j]){
                    wrong++; }}
            if(wrong == 0){
                count++; }
            wrong = 0;
            i++; } 
        cout << count << endl;
    }
    return 0;
}


