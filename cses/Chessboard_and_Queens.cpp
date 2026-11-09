#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

const int MOD = 1e9 + 7;

bool isSafe(int row, int col, int n, vector<string>& v){
    for(int i = row-1; i >= 0; i--){
        if(v[i][col] == 'Q'){
            return 0;
        }
    }
    for(int i = row-1,j = col-1; i >= 0 && j >= 0; i--,j--){
        if(v[i][j] == 'Q'){
            return 0;
        }
    }
    for(int i = row-1,j = col+1; i >= 0 && j < n; i--,j++){
        if(v[i][j] == 'Q'){
            return 0;
        }
    }
    return 1;
}

void fun(int i, int n, vector<string>& v, int& count){
    if(i == n){
        count++;
        return;
    }
    for(int col = 0; col <= n-1; col++){
        if(v[i][col] == '*'){
            continue;
        }
        if(isSafe(i, col, n, v)){
            v[i][col] = 'Q';
            fun(i+1, n, v, count);
            v[i][col] = '.';
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        vector<string> v;
        for(int i = 0; i < 8; i++){
            string s;
            cin >> s;
            v.push_back(s);
        }
        int count = 0;
        fun(0, 8, v, count);
        cout << count << endl;
    }
    return 0;
}