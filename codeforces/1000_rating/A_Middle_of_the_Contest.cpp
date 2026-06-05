#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while(t--){
        string first;
        cin >> first;
        int h1 = stoi(first.substr(0,2));
        int m1 = stoi(first.substr(3,2));

        string second;
        cin >> second;
        int h2 = stoi(second.substr(0,2));
        int m2 = stoi(second.substr(3,2));

        int hour = h2 - h1;
        int final_hour = 0;
        int final_minute = 0;

        if(hour%2 == 0){
            final_hour =  h1 + (hour/2); }
        else{
            final_hour = h1 + (hour/2);
            final_minute += 30; }

        int minute = m2 - m1;
        final_minute += m1 + (minute/2);

        if(final_minute >= 60){
            final_minute -= 60;
            final_hour += 1; }

        string final_min = to_string(final_minute);
        string final_ho = to_string(final_hour);
        if(final_minute < 10){
            final_min = '0' + final_min; }
        if(final_hour < 10){
            final_ho = '0' + final_ho; }
        cout << final_ho << ":" << final_min << endl;
    }
    return 0;
}


