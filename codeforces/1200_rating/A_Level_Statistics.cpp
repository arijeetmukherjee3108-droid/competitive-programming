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
        vector<int> pa;
        vector<int> ca;
        int temp = n;
        while(temp--){
            int p,c;
            cin >> p >> c;
            pa.push_back(p);
            ca.push_back(c); }
        if(n == 1){
            if(pa[0] < ca[0]){
                cout << "NO" << endl; }
            else{
                cout << "YES" << endl; }}
        else{
            int count = 0;
            for(int i = 0; i < n-1; i++){
                if(pa[i] > pa[i+1]){
                    count++;
                    break; }
                if(ca[i] > ca[i+1]){
                    count++;
                    break; }}
            if(count > 0){
                cout << "NO" << endl; }
            else{
                int total_count = 0;
                if(pa[0] < ca[0]){
                total_count++; }
                for(int i = 1; i < n; i++){
                    if(pa[i] - pa[i-1] < ca[i] - ca[i-1]){
                        total_count++;
                        break; }}
                if(total_count > 0){
                    cout << "NO" << endl; }
                else{
                    cout << "YES" << endl; }}}
    }
    return 0;
}


