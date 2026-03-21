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
        int count_big = 0, count_small = 0;
        vector<int> v;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(a[j] > a[i]){
                    count_big++; }
                else if(a[j] < a[i]){
                    count_small++; }}
            int maxi = max(count_big, count_small);
                v.push_back(maxi); 
            count_big = 0;
            count_small = 0; }
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " "; }
        cout << endl;
    }
    return 0;
}


