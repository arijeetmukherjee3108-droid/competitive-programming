#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        sort(a.begin(), a.end());
        int left = 0; 
        int right = 0;
        int size = 0;
        while(right < n){
            if(a[right] - a[left] <= 5){
                size = max(size, right-left+1);
                right++; }
            else{
                left++; }}
        cout << size << endl;
    }
    return 0;
}


