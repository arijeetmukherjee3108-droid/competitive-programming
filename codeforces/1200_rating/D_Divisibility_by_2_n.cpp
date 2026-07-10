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
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        long long count = 0;
        for(int i = 0; i < n; i++){
            if(a[i]%2 == 0){
                long long temp = a[i];
                while(temp > 0 && temp%2 == 0){
                    count++; 
                    temp /= 2; }}}
        if(count >= n){
            cout << 0 << endl; }
        else{
            vector<int> arr;
            for(int i = 1; i <= n; i++){
                int each = 0;
                int temp_i = i;
                if(temp_i%2 == 0){
                    while(temp_i > 0 && temp_i%2 == 0){
                        each++;
                        temp_i /= 2; }}
                arr.push_back(each); }
            sort(arr.begin(), arr.end());
            reverse(arr.begin(), arr.end());
            int i = 0;
            int used = 0;
            while(count < n && i < n){
                count += arr[i];
                used++;
                i++; }
            if(count >= n){
                cout << used << endl; }
            else{
                cout << -1 << endl; }}
    }
    return 0;
}


