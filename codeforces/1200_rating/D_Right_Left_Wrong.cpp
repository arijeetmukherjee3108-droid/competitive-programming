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
        vector<long long> pf(n, a[0]);
        for(int i = 0; i < n-1; i++){
            pf[i+1] = a[i+1] + pf[i]; }
        string s;
        cin >> s;
        long long sum = 0;
        int left = 0;
        int right = n-1;
        while(left < right){
            if(s[left] == 'L' && s[right] == 'R'){
                if(left == 0){
                    sum += pf[right]; }
                else{
                    sum += pf[right] - pf[left-1]; }
                left++;
                right--; }
            else if(s[left] != 'L'){
                left++; }
            else if(s[right] != 'R'){
                right--; }}
        cout << sum << endl;
    }
    return 0;
}


