#include <bits/stdc++.h>
using namespace std;

int main() {
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
        int left = 0;
        int right = n-1;
        int alice = 0;
        int bob = 0;
        int prev = 0;
        int ans = 0;
        int turn = 0; 
        while(left <= right){
            int curr = 0;
            if(turn == 0){
                while(left <= right && curr <= prev){
                    curr += a[left];
                    left++; }
                alice += curr; } 
            else{
                while(left <= right && curr <= prev){
                    curr += a[right];
                    right--; }
                bob += curr; }
            prev = curr;
            ans++;
            turn = 1-turn; }
        cout << ans << " " << alice << " " << bob << endl;
}
    return 0;
}