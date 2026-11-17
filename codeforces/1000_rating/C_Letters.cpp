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
    
    int t=1;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        vector<ll> b(m);
        for(int i = 0; i < m; i++){
            cin >> b[i]; }
        vector<ll> pfsum(n);
        pfsum[0] = a[0];
        for(int i = 1; i < n; i++){
            pfsum[i] = pfsum[i-1]+a[i]; }
        for(int i = 0; i < m; i++){
            int k = lower_bound(pfsum.begin(), pfsum.end(), b[i])-pfsum.begin();
            ll dorm = k+1;
            ll room = 0, prev = 0;
            if(k == 0){
                prev = 0; }
            else{
                prev = pfsum[k-1]; }
            room = b[i]-prev;
            cout << dorm << " " << room << endl; }
    }
    return 0;
}