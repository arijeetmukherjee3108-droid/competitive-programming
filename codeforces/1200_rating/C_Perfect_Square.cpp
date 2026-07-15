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
        vector<string> s(n);
        for(int i = 0; i < n; i++){
            cin >> s[i]; }
        long long count = 0;
        for(int j = 0; j < n; j++){
            for(int i = 0; i < n; i++){
                int b = s[i][j] - 'a';
                int c = s[j][n-1-i] - 'a';
                int d = s[n-1-i][n-1-j] - 'a';
                int e = s[n-1-j][i] - 'a';
                int maxi = max(max(b,c),max(d,e));
                count += (maxi-b)+(maxi-c)+(maxi-d)+(maxi-e); }}
        cout << count/4 << endl;
    }
    return 0;
}


