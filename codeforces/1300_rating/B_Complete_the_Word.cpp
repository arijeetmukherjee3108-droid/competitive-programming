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
        if(n < 26){
            cout << -1 << endl;
            return 0; }
        int flag = 1; 
        for(int l = 0, r = 25; r < n; l++, r++){
            vector<int> hsh(26, 0); 
            flag = 0; 
            for(int j = l; j <= r; j++){
                if(s[j] != '?'){
                    hsh[s[j]-'A']++; }}
            for(int i = 0; i < 26; i++){
                if(hsh[i] > 1){
                    flag++; }}
            if(flag == 0){
                for(int j = l; j <= r; j++){
                    if(s[j] == '?'){
                        for(int k = 0; k < 26; k++){
                            if(hsh[k] == 0){
                                s[j] = (char)(k+'A');
                                hsh[k] = 1; 
                                break; }}}}
                for(int j = 0; j < n; j++){
                    if(s[j] == '?'){
                        s[j] = 'A'; }}
                cout << s << endl; 
                break; }}
        if(flag > 0){
            cout << -1 << endl; }
}
    return 0;
}