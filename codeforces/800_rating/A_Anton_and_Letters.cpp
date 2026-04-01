#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    set<char> letter;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            letter.insert(s[i]); }}
    cout << letter.size() << endl;
    return 0;
}