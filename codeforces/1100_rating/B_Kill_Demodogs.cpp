#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long step_1 = n%M;
        long long step_2 = (n+1)%M;
        long long step_3 = (4*n-1)%M;
        long long ans = step_1;
        ans = ((ans)%M*(step_2)%M)%M;
        ans = ((ans)%M*(step_3)%M)%M;
        ans = ((ans)%M*(337)%M)%M;
        cout << ans << endl;
    }
    return 0;
}