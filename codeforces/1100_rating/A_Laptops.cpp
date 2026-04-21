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
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            int x,y;
            cin >> x >> y;
            v.push_back({x,y}); }
        sort(v.begin(), v.end());
        int count = 0;
        for(int i = 0; i < n-1; i++){
            if(v[i].second > v[i+1].second){
                count++;
                break; }}
        if(count > 0){
            cout << "Happy Alex" << endl; }
        else{
            cout << "Poor Alex" << endl; }
    }
    return 0;
}


