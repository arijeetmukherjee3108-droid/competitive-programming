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
        string s;
        cin >> s;
        int count_l = 0, count_r = 0, count = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'R'){
                count_r++; }
            if(s[i] == 'L'){
                if(count_r >= k){
                    continue; }
                else{
                    s[i] = 'R';
                    count++;
                    count_r++; }}}
        for(int i = n-1; i >= 0; i--){
            if(s[i] == 'L'){
                count_l++; }
            if(s[i] == 'R'){
                if(count_l >= k){
                    continue; }
                else{
                    s[i] = 'L';
                    count++;
                    count_l++; }}}
        count_l = 0;
        count_r = 0;
        int flag = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'R'){
                count_r++;
                continue; }
            else{
                if(count_r >= k){
                    continue; }
                else{
                    flag = 1;
                    break; }}}
        for(int i = n-1; i >= 0; i--){
            if(s[i] == 'L'){
                count_l++;
                continue; }
            else{
                if(count_l >= k){
                    continue; }
                else{
                    flag = 1;
                    break; }}}
        if(flag > 0){
            cout << -1 << endl; }
        else{
            cout << count << endl; }
    }
    return 0;
}
