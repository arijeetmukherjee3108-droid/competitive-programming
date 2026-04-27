#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        long long n;
        cin >> n;
        string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
        long long b = 1;
        while(n > 5*b){
            n -= 5*b;
            b *= 2; }
        cout << names[(n-1)/b] << endl;
    }
    return 0;
}


