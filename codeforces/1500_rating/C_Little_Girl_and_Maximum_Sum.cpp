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
    
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i]; }
    vector<int> freq(n+2, 0);
    while(q--){
        int l,r;
        cin >> l >> r;
        freq[l] += 1;
        freq[r+1] -= 1;
    }
    for(int i = 1; i <= n; i++){
        freq[i] += freq[i-1]; }
    vector<int> final_freq(n);
    for(int i = 0; i < n; i++){
        final_freq[i] = freq[i+1]; }
    sort(a.begin(), a.end());
    sort(final_freq.begin(), final_freq.end());
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += (ll)a[i]*final_freq[i];
    }
    cout << sum << endl;
    return 0;
}