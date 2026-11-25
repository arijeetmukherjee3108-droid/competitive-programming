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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i]; }
        vector<vector<int>> pos(n+1);
        for(int i = 0; i < n; i++){
            pos[a[i]].push_back(i); }
        vector<int> ans(n, 0);
        vector<int> rem;
        for(int i = 1; i <= n; i++){
            if((int)pos[i].size() >= k){
                for(int j = 0; j < k; j++){
                    ans[pos[i][j]] = j+1; }}
            else{
                for(int j = 0; j < (int)pos[i].size(); j++){
                    rem.push_back(pos[i][j]); }}}
        for(int i = 0; i + k <= (int)rem.size(); i += k){
            for(int j = 0; j < k; j++){
                ans[rem[i+j]] = j+1; }}
        for(int i = 0; i < n; i++){
            cout << ans[i] << " "; }
        cout << endl;
}
    return 0;
}