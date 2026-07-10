#include <bits/stdc++.h>
using namespace std;

vector<string> perm;
void func(){
    for(char c = 'a'; c <= 'z'; c++){
        string s = "";
        s += c;
        perm.push_back(s); }
    for(char c = 'a'; c <= 'z'; c++){
        for(char b = 'a'; b <= 'z'; b++){
            string s = "";
            s += c;
            s += b;
            perm.push_back(s); }}
    for(char c = 'a'; c <= 'z'; c++){
        for(char b = 'a'; b <= 'z'; b++){
            for(char a = 'a'; a <= 'z'; a++){
                string s = "";
                s += c;
                s += b;
                s += a;
                perm.push_back(s); }}}
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    func();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < perm.size(); i++){
            if(s.find(perm[i]) == string::npos){
                cout << perm[i] << endl;
                break; }}
    }
    return 0;
}


