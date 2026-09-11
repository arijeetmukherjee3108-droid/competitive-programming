#include <bits/stdc++.h>
using namespace std;

// void sieve(int n, vector<int>& primes){
//     bool primes(n+1);
//     fill(primes, primes+n+1, true);

//     primes[0] = primes[1] = false;
//     for(int i = 2; i*i <= n; i++){
//         if(primes[i]){
//             for(int j = i*i; j <= n; j += i){
//                 primes[j] = false; 
//             }
//         }
//     }
//     for(int i = 2; i <= n; i++){
//         if(is_prime[i]){
//             primes.push_back(i);
//         }
//     }
// }


void prime_factorization(int n, vector<int>& facts){
    for(long long i = 2; i*i <= n; i++){
        while(n%i == 0){
            facts.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        facts.push_back(n);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> d(n);
        for(int i = 0; i< n; i++){
            cin >> d[i]; }
        vector<long long> facts;
        sort(d.begin(), d.end());
        long long num = d[0]*d[n-1];
        for(long long i = 2; i*i <= num; i++){
            if(num%i == 0){
                facts.push_back(i);
                if(i != num/i){
                    facts.push_back(num/i); }}}
        sort(facts.begin(), facts.end());
        if(d == facts){
            cout << num << endl; }
        else{
            cout << -1 << endl; }
    }
    return 0;
}


