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
// to find length of a bit = 64 - __builtin_clzll(n)
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a,b;
        cin >> a >> b;
        ll x = 0;
        ll maxi = 0;
        if(a > b){
            maxi = a; }
        else{
            maxi = b; }
        int flag = 0;
        for(int i = n-1; i >= 0; i--){
            ll bit_a = (a >> i) & 1LL;
            ll bit_b = (b >> i) & 1LL;
            if(bit_a == bit_b){
                if(bit_a == 0){
                    x += (1LL << i); }}
            else{
                if(flag == 0){
                    flag = 1; }
                else{
                    if((maxi >> i) & 1){
                        x += (1LL << i); }}}}
        cout << x << endl;
    }
    return 0;
}