#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> b(n);
        vector<int> v;
        for(int i = 0; i < n; i++){
            cin >> b[i]; }
        for(int i = 0; i < n; i++){
            if(b[i] == 1){
                v.push_back(i); }}
        int count = 0;
        for(int i = 0; i < n; i++){
            if(b[i] == 1){
                count++;
                break; }}
        int count_1 = 0;
        if(count != 0){
            for(int i = 0; i < v.size()-1; i++){
                if(abs(v[i] - v[i+1]) <= k){
                    count_1++;
                    break; }}
            if(count_1 == 0){
                for(int i = 0; i < n; i++){
                    if(b[i] == 0){
                        int c = 0;
                        for(int j = 0; j < v.size(); j++){
                            if(abs(v[j] - i) <= k){
                                c = 1;
                                break; }}
                        if(c == 0){
                            count_1++;
                            break; }}}}}
        else{
            count_1 = 1; }
        if(count_1 != 0){
                cout << "No" << endl; }
            else{
                cout << "Yes" << endl; }
    }
    return 0;
}


