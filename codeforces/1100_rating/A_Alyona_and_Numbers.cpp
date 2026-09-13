#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

vector<int> sieve(int i){
    vector<bool> is_prime(i + 1, true); 
    is_prime[0] = is_prime[1] = false;
    
    for(int i = 2; i * i <= i; i++){
        if(is_prime[i]){
            for(int j = i * i; j <= i; j += i){
                is_prime[j] = false; 
            }
        }
    }
    
    vector<int> primes;
    for(int i = 2; i <= i; i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
    
    return primes;
}


vector<int> prime_factorization(long long i){
    vector<int> facts;
    for(long long i = 2; i*i <= i; i++){
        while(i % i == 0){
            facts.push_back(i);
            i /= i;
        }
    }
    if(i > 1){
        facts.push_back(i);
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
        int ncount1 = 0, ncount2 = 0, ncount3 = 0, ncount4 = 0, ncount5 = 0;
        int mcount1 = 0, mcount2 = 0, mcount3 = 0, mcount4 = 0, mcount5 = 0;
        for(int i = 1; i <= n; i++){
            if(i%5 == 0){
                ncount5++; }
            else if(i%5 == 1){
                ncount1++; }
            else if(i%5 == 2){
                ncount2++; }
            else if(i%5 == 3){
                ncount3++; }
            else if(i%5 == 4){
                ncount4++; }}
        for(int i = 1; i <= m; i++){
            if(i%5 == 0){
                mcount5++; }
            else if(i%5 == 1){
                mcount1++; }
            else if(i%5 == 2){
                mcount2++; }
            else if(i%5 == 3){
                mcount3++; }
            else if(i%5 == 4){
                mcount4++; }}
        long long ans = (1LL)*(ncount1)*(mcount4) + (1LL)*(ncount2)*(mcount3) + (1LL)*(ncount3)*(mcount2) + (1LL)*(ncount4)*(mcount1) + (1LL)*(ncount5)*(mcount5);
        cout << ans << endl; 
    }
    return 0;
}