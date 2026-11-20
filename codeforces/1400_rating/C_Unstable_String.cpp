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
        string s;
        cin >> s;
        int n = s.length();
        int left = 0;
        ll count = n; 
        int ari_a = 0; 
        if(s[0] == '?'){
            ari_a = 1; }
        else{
            ari_a = 0; }
        for(int i = 1; i < n; i++){
            int right = i;
            if(s[i] == '?'){
                ari_a++; }
            else{
                if(s[i-1] != '?'){
                    if(s[i] == s[i-1]){
                        left = i; }}
                else{
                    int prev = i-ari_a-1;
                    if(prev >= left){
                        if((ari_a%2 == 0 && s[prev] == s[i]) || (ari_a%2 == 1 && s[prev] != s[i])){
                            left = prev+1; }}}
                ari_a = 0; }
            count += (right-left); }
        cout << count << endl;
}
    return 0;
}