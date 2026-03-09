#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string a;
        cin >> a;
        string b;
        cin >> b;
        int c = 0;
        for(int i = 0; i <= 5; i++){
            if(a.find(b) != string::npos){
                cout << i << endl;
                c++;
                break; }
            a += a; }
        if(c == 0){
            cout << -1 << endl; }
    }
    return 0;
}


