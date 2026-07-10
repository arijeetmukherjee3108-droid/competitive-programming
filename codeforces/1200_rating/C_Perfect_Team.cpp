    #include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long c,m,x;
        cin >> c >> m >> x;
        long long count = min(c,min(m, ((c+m+x)/3)));
        cout << count << endl;
    }
    return 0;
}