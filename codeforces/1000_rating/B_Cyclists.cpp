#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k,p,m;
        cin >>n >> k >> p >> m;
        deque<int> q;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            q.push_back(x); }
        int tar = p-1;
        int count = 0;
        while(true){
            if(tar < k){
                if(m >= q[tar]){
                    m -= q[tar]; 
                    count++;
                    q.push_back(q[tar]);
                    q.erase(q.begin() + tar);
                    tar = q.size()-1; }
                else{
                    break; }}
            else{
                int mini = 1e9;
                int y = 0;
                for(int j = 0; j < k; j++){
                    if(q[j] < mini){
                        mini = q[j];
                        y = j; }}
                if(m >= mini){
                    m -= mini;
                    q.push_back(q[y]);
                    q.erase(q.begin() + y);
                    tar--; }
                else{
                    break; }}
                if(m <= 0){
                    break; }}
        cout << count << endl;
    }
    return 0;
}


