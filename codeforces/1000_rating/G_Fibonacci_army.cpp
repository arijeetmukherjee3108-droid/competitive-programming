#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        int n;
        cin >> n;
        int a[20] = {1,2,3,5,8,13,21,34,55,89,144,233,
        377,610,987,1597,2584,4181,6765,10946};
        cout << a[n-1] << endl;
    }
    return 0;
}


