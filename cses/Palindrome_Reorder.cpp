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
        vector<int> hsh(26, 0);
        for(int i = 0; i < n; i++){
            hsh[s[i]-'A']++; }
        int count_odd = 0;
        for(int i = 0; i < 26; i++){
            if(hsh[i]%2 != 0){
                count_odd++; }}
        if(count_odd > 1){
            cout << "NO SOLUTION" << endl;
            return 0; }
        int oddChar = -1;
        string fir_half;
        for(int i = 0; i < 26; i++){
            for(int j = 0; j < hsh[i]/2; j++){
                fir_half.push_back('A'+i); }
            if(hsh[i]%2 != 0){
                oddChar = i; }}
        string sec_half = fir_half;
        reverse(sec_half.begin(), sec_half.end());
        string ans = fir_half;
        if(oddChar != -1){
            ans.push_back(oddChar+'A'); }
        ans += sec_half;
        cout << ans << endl;
    }
    return 0;
}