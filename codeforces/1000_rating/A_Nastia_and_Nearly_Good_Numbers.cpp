#include <bits/stdc++.h>
using namespace std;

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
        int a,b;
        cin >> a >> b;
        if(b == 1){
            cout << "NO" << endl; }
        else if(a != 1 && b == 1){
            cout << "NO" << endl; }
        else if(a == 1 && b != 1){
            cout << "YES" << endl;
            long long B = b*2LL;
            if(B == 2){
                cout << 1 << " " << 1 << " " << B << endl; }
            else if(B%2 == 0 && B != 2){
                cout << (B/2)+1 << " " << (B/2)-1 << " " << B << endl; }
            else if(B%2 != 0){
                cout << B/2 << " " << B-(B/2) << " " << B << endl; }}
        else if(a != 1 && b != 1){
            cout << "YES" << endl;
            long long maxi = 0, mini = 0;
            maxi = b*2LL;
            mini = a; 
            long long mul1 = 0, mul2 = 0;
            if(maxi%2 == 0){
                mul1 = (maxi/2)+1;
                mul2 = (maxi/2)-1; }
            else{
                mul1 = maxi/2;
                mul2 = maxi-(maxi/2); }
            cout << mul1*mini << " " << mul2*mini << " " << maxi*mini << endl; }
    }
    return 0;
}