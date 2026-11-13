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

int t,k;
vector<int> dp(100007, -1);
vector<int> pref(100007, 0);

int solve(int n){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = (solve(n-k)+solve(n-1))%MOD;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t >> k;
    for(int i = 1; i <= 100000; i++){
        pref[i] = (pref[i-1] + solve(i)) % MOD; }
    while(t--){
        int a,b;
        cin >> a >> b;
        ll sum = (pref[b]-pref[a-1]+MOD)%MOD;
        cout << sum << endl;  
    }
    return 0;
}git 