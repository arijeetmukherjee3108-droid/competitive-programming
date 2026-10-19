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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count_0 = 0, count_1 = 0;
        vector<int> a;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                count_0++; }
            else{
                count_1++; }}
        if(count_0 != count_1){
            cout << -1 << endl; }
        else{
            int b = 0;
            bool c1 = false;
            bool c2 = false;
            for(int i = 0; i < n; i++){
                if(s[i] == '('){
                    if(b >= 0){
                        a.push_back(1);
                        c1 = true; }
                    else{
                        a.push_back(2);
                        c2 = true; }
                    b++; }
                if(s[i] == ')'){
                    if(b > 0){
                        a.push_back(1);
                        c1 = true; }
                    else{
                        a.push_back(2);
                        c2 = true; }
                    b--; }}
            if((c1 == true && c2 == false) || (c1 == false && c2 == true)){
                cout << 1 << endl;
                for(int i = 0; i < n; i++){
                    cout << 1 << " "; }
                cout << endl; }
            else if(c1 == true && c2 == true){
                cout << 2 << endl;
                for(int i = 0; i < a.size(); i++){
                    cout << a[i] << " "; }
                cout << endl; }}
    }
    return 0;
}