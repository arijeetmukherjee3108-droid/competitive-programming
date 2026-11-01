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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        ll tar = 0;
        int mini_th = n;
        for(int i = 0; i < n; i++){
            tar += a[i];
            int curr_th = i+1;
            ll curr_sum = 0;
            int curr_len = 0;
            int sol = 1;
            for(int j = i+1; j < n; j++){
                curr_sum += a[j];
                curr_len++;
                if(curr_sum > tar){
                    sol = 0;
                    break; }
                else if(curr_sum == tar){
                    curr_th = max(curr_th, curr_len); 
                curr_sum = 0;
                curr_len = 0; }}
            if(curr_sum != 0){
                sol = 0; }
            if(sol > 0){
                mini_th = min(mini_th, curr_th); }}
        cout << mini_th << endl;
    }
    return 0;
}