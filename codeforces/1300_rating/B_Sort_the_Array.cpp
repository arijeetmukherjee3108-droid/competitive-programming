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
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        int check = 0;
        for(int i = 0; i < n-1; i++){
            if(a[i] > a[i+1]){
                check = 1;
                break; }}
        if(check > 0){
            int count = 0, start = -1, end = -1;
            for(int i = 0; i < n-1; i++){
                if(a[i] > a[i+1] && start == -1){
                    start = i;
                    count = 1; }
                if(a[i] > a[i+1] && start != -1){
                    end = i+1; }
                if(a[i] < a[i+1] && count == 1){
                    break; }}
            int flag = 0;
            reverse(a.begin() + start,a.begin() + end + 1);
            vector<long long> temp = a;
            sort(temp.begin(), temp.end());
            for(int i = 0; i < n; i++){
                if(a[i] != temp[i]){
                    flag = 1;
                    break; }}
            if(flag == 1){
                cout << "no" << endl; }
            else{
                cout << "yes" << endl;
                cout << start+1 << " " << end+1 << endl; }}
        else{
            cout << "yes" << endl;
            cout << 1 << " " << 1 << endl; }
    }
    return 0;
}


