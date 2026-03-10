#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int w,h;
        cin >> w >> h;
        int hor_1;
        cin >> hor_1;
        vector<int> v_hor_1(hor_1);
        for(int i = 0;i < hor_1; i++){
            cin >> v_hor_1[i]; }
        int hor_2;
        cin >> hor_2;
        vector<int> v_hor_2(hor_2);
        for(int i = 0; i < hor_2; i++){
            cin >> v_hor_2[i]; }
        int ver_1;
        cin >> ver_1;
        vector<int> v_ver_1(ver_1);
        for(int i = 0;i < ver_1; i++){
            cin >> v_ver_1[i]; }
        int ver_2;
        cin >> ver_2;
        vector<int> v_ver_2(ver_2);
        for(int i = 0; i < ver_2; i++){
            cin >> v_ver_2[i]; }
        int mini_hor_1 = w+1;
        int mini_hor_2 = w+1;
        int mini_ver_1 = h+1;
        int mini_ver_2 = h+1;
        int maxi_hor_1 = -1;
        int maxi_hor_2 = -1;
        int maxi_ver_1 = -1;
        int maxi_ver_2 = -1;
        for(int i = 0;i < hor_1; i++){
            mini_hor_1 = min(mini_hor_1,v_hor_1[i]);
            maxi_hor_1 = max(maxi_hor_1,v_hor_1[i]); }
        for(int i = 0;i < hor_2; i++){
            mini_hor_2 = min(mini_hor_2,v_hor_2[i]);
            maxi_hor_2 = max(maxi_hor_2,v_hor_2[i]); }
        for(int i = 0;i < ver_1; i++){
            mini_ver_1 = min(mini_ver_1,v_ver_1[i]);
            maxi_ver_1 = max(maxi_ver_1,v_ver_1[i]); }
        for(int i = 0;i < ver_2; i++){
            mini_ver_2 = min(mini_ver_2,v_ver_2[i]);
            maxi_ver_2 = max(maxi_ver_2,v_ver_2[i]); }
        long long diff_hor_1 = maxi_hor_1 - mini_hor_1;
        long long diff_hor_2 = maxi_hor_2 - mini_hor_2;
        long long diff_ver_1 = maxi_ver_1 - mini_ver_1;
        long long diff_ver_2 = maxi_ver_2 - mini_ver_2;
        long long ans_hor = max(diff_hor_1, diff_hor_2)*h;
        long long ans_ver = max(diff_ver_1, diff_ver_2)*w;
        cout << max(ans_hor, ans_ver) << endl;
    }
    return 0;
}


