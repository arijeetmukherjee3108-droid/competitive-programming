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
        string s;
        cin >> s;
        int n = s.length();
        vector<char> big = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        vector<char> small = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

        vector<int> hsh_A(26, 0);
        vector<int> hsh_a(26, 0);
        for(int i = 0; i < n; i++){
            if((s[i]-'a') >= 0 && (s[i]-'a') <= 26){
                hsh_a[s[i]-'a']++; }}
        for(int i = 0; i < n; i++){
            if((s[i]-'A') >= 0 && (s[i]-'A') <= 26){
                hsh_A[s[i]-'A']++; }}
        for(int i = 0; i < hsh_A.size(); i++){
            if(hsh_A[i] > 0){
                cout << big[i] << " " << hsh_A[i] << endl; }}
        for(int i = 0; i < hsh_a.size(); i++){
            if(hsh_a[i] > 0){
                cout << small[i] << " " << hsh_a[i] << endl; }}
    }
    return 0;
}