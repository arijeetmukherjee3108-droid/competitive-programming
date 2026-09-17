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
    
    int t=1;
    while(t--){
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '8' || s[i] == '0'){
                cout << "YES" << endl;
                cout << s[i] << endl;
                return 0; }}
        if(s.length() >= 2){
            for(int i = 0; i < s.length(); i++){
                for(int j = i+1; j < s.length(); j++){
                    int num = (s[i]-'0')*10 + (s[j]-'0');
                    if(num%8 == 0){
                        cout << "YES" << endl;
                        cout << num << endl; return 0; }}}}
        if(s.length() >= 3){
            for(int i = 0; i < s.length(); i++){
                for(int j = i+1; j < s.length(); j++){
                    for(int k = j+1; k < s.length(); k++){
                        int num = (s[i]-'0')*100 + (s[j]-'0')*10 + (s[k]-'0');
                        if(num%8 == 0){
                            cout << "YES" << endl; 
                            cout << num << endl; 
                            return 0; }}}}}
        cout << "NO" << endl;
    }
    return 0;
}

