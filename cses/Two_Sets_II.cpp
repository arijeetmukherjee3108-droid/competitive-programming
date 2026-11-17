#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

const int MOD = 1e9+7;

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

vector<vector<int>> memo;

int fun(int i, int curr_sum, int tar, int n_limit){
    if(curr_sum == tar){
        return 1; }
    if(curr_sum > tar || i > n_limit){
        return 0; }
    if(memo[i][curr_sum] != -1){
        return memo[i][curr_sum]; }
    int pick = fun(i+1, curr_sum + i, tar, n_limit);
    int not_pick = fun(i+1, curr_sum, tar, n_limit);
    return memo[i][curr_sum] = (pick+not_pick)%MOD;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    while(t--){
        int n;
        cin >> n;
        ll sum = 1LL*n*(n+1)/2;
        if(sum%2 != 0){
            cout << 0 << endl;
            return 0; }
        int tar = sum/2;
        memo.assign(n, vector<int>(tar+1, -1));
        cout << fun(1, 0, tar, n-1) << endl; 
    }
    return 0;
}