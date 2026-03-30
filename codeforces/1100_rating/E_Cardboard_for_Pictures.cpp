#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vl = vector<long long>;
using ll = long long;
using lll = __int128_t;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    ll n,c;
    cin>>n>>c;
    vl s(n);
    vl sq_s(n);
    vl s2 (n);
    for(int i=0;i<n;i++){
        cin>>s[i]; }
    for(int i=0;i<n;i++){
        sq_s[i] = 1LL*s[i]*s[i]; }
    for(int i=0;i<n;i++){
        s2[i] = 2*s[i]; }
    ll sum_2 = 0;
    ll sum_square = 0;
    for(int i=0;i<n;i++){
        sum_2+=s2[i]; }
    for(int i=0;i<n;i++){
        sum_square += sq_s[i]; }
    ll com = c-sum_square;
    ll lo = 1;
    ll hi = 2e9;
    while(lo<=hi){
        ll w = lo + (hi-lo)/2 ; 
        lll exp = (lll)n*w*w + (lll)sum_2*w ; 
        if(exp == com){
            cout<<w/2<<endl;
            break; }
        else if(exp > com){
            hi = w-1; }
        else{
            lo = w+1; }}
   }
   return 0;
}