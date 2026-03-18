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
        string s;
        cin >> s;
        set<int> a;
        int count = 1;
        a.insert(count);
        for(int i = 0; i < n; i++){
            if(s[count-1] == 'R'){
                count++; }
            else if(s[count-1] == 'L'){
                count--; }
                a.insert(count); }
        if(a.find(1) != a.end()){
            cout << a.size() << endl; }
        else{
            cout << a.size() + 1 << endl; }
    }
    return 0;
}


