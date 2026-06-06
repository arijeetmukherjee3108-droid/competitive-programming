#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--){
        int n,s;
        cin >> n >> s;
        int temp = n;
        vector<int> time;
        vector<int> floor;
        int total_time = 0;
        while(temp--){
            int f;
            cin >> f;
            int t;
            cin >> t;
            floor.push_back(f);
            time.push_back(t); }
        floor.push_back(s);
        for(int i = n-1; i >= 0; i--){
            total_time += floor[i+1]-floor[i]; 
            if(total_time < time[i]){
                total_time += (time[i]-total_time); }}
        total_time += floor[0];
        cout << total_time << endl;
    }
    return 0;
}


