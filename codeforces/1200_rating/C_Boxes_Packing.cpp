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
        map<int, int> freq;
        int maxi = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            freq[x]++;
            maxi = max(maxi, freq[x]); }
        cout << maxi << endl;
    }
    return 0;
}


