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
        vector<int> first_arr(n+1);
        vector<int> second_arr;
        for(int i = 1; i <= n; i++){
            first_arr[i] = i; }
        int count = 0;
        int first = n/2;
        int second = (n/2)+1;
        int i = (n*2)-1;
        while(count < first){
            second_arr.push_back(i);
            i -= 2;
            count++; }
        int count_sec = 0;
        int j = n*2;
        while(count_sec < second){
            second_arr.push_back(j);
            j -= 2;
            count_sec++; }
        if(n%2 == 0){
            cout << "No" << endl; }
        else{
            cout << "Yes" << endl;
            for(int k = 1; k <= n; k++){
                cout << first_arr[k] << " " << second_arr[k-1] << endl; }}
}
    return 0;
}


