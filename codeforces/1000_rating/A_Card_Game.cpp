#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        char trump;
        cin >> trump;
        string first, second;
        cin >> first >> second;
        string first_start = first.substr(0,1);
        string second_start = second.substr(0,1);
        char first_last = first[1];
        char second_last = second[1];
        if(first_last == trump && second_last != trump){
            cout << "YES" << endl; }
        else if(first_last != trump && second_last == trump){
            cout << "NO" << endl; }
        else if(first_last != trump && second_last != trump && first_last != second_last){
            cout << "NO" << endl; }
        else{
            if(first_start == "T"){ 
                first_start = "10"; }
            if(first_start == "J"){ 
                first_start = "11"; }
            if(first_start == "Q"){ 
                first_start = "12"; }
            if(first_start == "K"){ 
                first_start = "13"; }
            if(first_start == "A"){ 
                first_start = "14"; }
            
            if(second_start == "T"){ 
                second_start = "10"; }
            if(second_start == "J"){ 
                second_start = "11"; }
            if(second_start == "Q"){ 
                second_start = "12"; }
            if(second_start == "K"){ 
                second_start = "13"; }
            if(second_start == "A"){ 
                second_start = "14"; }
            
            int first_str = stoi(first_start);
            int second_str = stoi(second_start);
            
            if(first_str > second_str){
                cout << "YES" << endl; }
            else{
                cout << "NO" << endl; }}
    }
    return 0;
}