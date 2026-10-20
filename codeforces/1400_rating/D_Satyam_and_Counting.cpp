#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

const int MOD = 1e9 + 7;

vector<int> sieve(int n){
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    for(int i = 2; i * i <= n; i++){
        if(is_prime[i]){
            for(int j = i * i; j <= n; j += i){
                is_prime[j] = false;
            }
        }
    }
    
    vector<int> primes;
    for(int i = 2; i <= n; i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
    
    return primes;
}

vector<int> prime_factorization(long long n){
    vector<int> facts;
    for(long long i = 2; i*i <= n; i++){
        while(n % i == 0){
            facts.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        facts.push_back(n);
    }
    
    return facts;
}

long long power(long long a, long long b){
    if(b == 0){
        return 1;
    }

    long long half_power = power(a, b/2);
    if(b % 2 == 0){
        return (half_power * half_power) % MOD;
    }
    else{
        return (((half_power * half_power) % MOD) * (a % MOD)) % MOD;
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> v;
        vector<int> a;
        vector<int> b;
        for(int i = 0; i < n; i++){
            int x,y;
            cin >> x >> y;
            a.push_back(x);
            b.push_back(y);
            v.push_back({x,y}); }
        int c = 0;
        sort(v.begin(), v.end());
        for(int i = 0; i < n-1; i++){
            if(v[i].first == v[i+1].first){
                c++; }}
        ll ans = 1LL*c*(n-2);
        vector<int> p(n+5, 0);
        vector<int> q(n+5, 0);
        for(int i = 0; i < n; i++){
            int ari_x = v[i].first;
            int ari_y = v[i].second;
            if(ari_y == 0){
                p[ari_x] = 1; }
            else{
                q[ari_x] = 1; }}
        for(int i = 1; i <= n-1; i++){
            if(p[i-1] == 1 && q[i] == 1 && p[i+1] == 1){
                ans++; }
            if(q[i-1] == 1 && p[i] == 1 && q[i+1] == 1){
                ans++; }}
        cout << ans << endl;
    }
    return 0;
}