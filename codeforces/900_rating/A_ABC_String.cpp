#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        int count_a = 0, count_b = 0, count_c = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'A'){
                count_a++; }
            else if(s[i] == 'B'){
                count_b++; }
            else if(s[i] == 'C'){
                count_c++; }}
        int flag = 0;
        int max_temp = max(count_a, count_b);
        int maxi = max(max_temp, count_c);
        if(maxi == count_a){
            if(count_a == count_b + count_c){
                flag = 1; }
            else{
                flag = 0; }}
        if(maxi == count_b){
            if(count_b == count_a + count_c){
                flag = 1; }
            else{
                flag = 0; }}
        if(maxi == count_c){
            if(count_c == count_b + count_a){
                flag = 1; }
            else{
                flag = 0; }}
        if(flag == 0){
            cout << "NO" << endl; }
        else{
            char target;
            if(maxi == count_a){
                target = 'A'; }
            else if(maxi == count_b){
                target = 'B'; }
            else{
                target = 'C'; }

            bool ans = false;
            int balance1 = 0;
            bool ok1 = true;
            for(int i = 0; i < n; i++){
                if(s[i] == target){
                    balance1++; }
                else{
                    balance1--; }
                if(balance1 < 0){
                    ok1 = false; }}
            if(ok1 && balance1 == 0){
                ans = true; }
            int balance2 = 0;
            bool ok2 = true;
            for(int i = 0; i < n; i++){
                if(s[i] == target){
                    balance2--; }
                else{
                    balance2++; }
                if(balance2 < 0){
                    ok2 = false; }}
            if(ok2 && balance2 == 0){
                ans = true; }

            if(ans){
                cout << "YES" << endl; }
            else{
                cout << "NO" << endl; }}
    }
    return 0;
}


