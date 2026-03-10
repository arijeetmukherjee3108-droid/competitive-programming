#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        long long p,q;
        cin >> p >> q;
        long long x,y;
        cin >> x >> y;
        vector<pair<int,int>> v_k;
        vector<pair<int,int>> v_q;
        v_k.push_back({p+a,q+b});
        v_k.push_back({p+a,q-b});
        v_k.push_back({p-a,q+b});
        v_k.push_back({p-a,q-b});
        v_k.push_back({p+b,q+a});
        v_k.push_back({p+b,q-a});
        v_k.push_back({p-b,q+a});
        v_k.push_back({p-b,q-a});
        v_q.push_back({x+a,y+b});
        v_q.push_back({x+a,y-b});
        v_q.push_back({x-a,y+b});
        v_q.push_back({x-a,y-b});
        v_q.push_back({x+b,y+a});
        v_q.push_back({x+b,y-a});
        v_q.push_back({x-b,y+a});
        v_q.push_back({x-b,y-a});
        sort(v_k.begin(), v_k.end());
        v_k.erase(unique(v_k.begin(), v_k.end()), v_k.end());
        sort(v_q.begin(), v_q.end());
        v_q.erase(unique(v_q.begin(), v_q.end()), v_q.end());
        int count = 0;
        for(int i = 0; i < v_k.size(); i++){
            for(int j = 0; j < v_q.size(); j++){
                if((v_k[i].first == v_q[j].first) && (v_k[i].second == v_q[j].second)){
                    count++; }
                else{
                    continue; }}}
        cout << count << endl;
    }
    return 0;
}
 