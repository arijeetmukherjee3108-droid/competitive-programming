#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count_0 = 0, count_1 = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '0'){
                count_0++; }
            else if(s[i] == '1'){
                count_1++; }}
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '0'){
                if(count_1 > 0){
                    count_1--;
                    ans++; }
                else{
                    break; }}
            else{
                if(count_0 > 0){
                    count_0--;
                    ans++; }
                else{
                    break; }}}
        cout << s.length() - ans << endl;
    }
    return 0;
}


