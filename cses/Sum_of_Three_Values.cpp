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

long long power(long long v, long long b){
    if(b == 0){
        return 1;
    }

    long long half_power = power(v, b/2);
    if(b % 2 == 0){
        return (half_power * half_power) % MOD;
    }
    else{
        return (((half_power * half_power) % MOD) * (v % MOD)) % MOD;
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    ll x;
    cin >> x;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i+1; }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int rem = (x-(v[i].first+v[j].first));
            int k = lower_bound(v.begin()+j+1, v.end(), make_pair(rem, 0))-v.begin();
            if(k >= 0 && k < n && v[k].first == rem){
                cout << v[i].second << " " << v[j].second << " " << v[k].second << endl;
                return 0; }}}
    cout << "IMPOSSIBLE" << endl;
    return 0;
}