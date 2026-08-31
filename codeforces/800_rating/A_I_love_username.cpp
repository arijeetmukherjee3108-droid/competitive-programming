#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        int n;
        cin >> n;
        int first;
        cin >> first;
        int maxi = first;
        int mini = first;
        int count = 0;
        for(int i = 1; i < n; i++){
            int curr;
            cin >> curr;
            if(curr > maxi){
                count++;
                maxi = curr; } 
            else if(curr < mini){
                count++;
                mini = curr; }}
        cout << count << endl;
    }
    return 0;
}
