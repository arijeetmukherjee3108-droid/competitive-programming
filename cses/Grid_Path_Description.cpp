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

void final_boss(int& ans, int steps, string& s, int row, int col, vector<vector<int>>& v){

    // yaha base cases hai teen
    if(row == 6 && col == 0){
        if(steps == 48){
            ans++;
        }
        return;
    }
    if(col > 0 && col < 6 && v[row][col-1] == 0 && v[row][col+1] == 0 && (row == 0 || row == 6 || (v[row-1][col] == 1 && v[row+1][col] == 1))){
        return; }
    if(row > 0 && row < 6 && v[row-1][col] == 0 && v[row+1][col] == 0 && (col == 0 || col == 6 || (v[row][col-1] == 1 && v[row][col+1] == 1))){
        return;
    }
    // yaha se backtracking chalu hori hai
    v[row][col] = 1;

    if(s[steps] == '?' || s[steps] == 'U'){
        if(row-1 >= 0 && v[row-1][col] == 0){
            final_boss(ans, steps+1, s, row-1, col, v);
        }
    }
    if(s[steps] == '?' || s[steps] == 'D'){
        if(row+1 <= 6 && v[row+1][col] == 0){
            final_boss(ans, steps+1, s, row+1, col, v);
        }
    }
    if(s[steps] == '?' || s[steps] == 'L'){
        if(col-1 >= 0 && v[row][col-1] == 0){
            final_boss(ans, steps+1, s, row, col-1, v);
        }
    }
    if(s[steps] == '?' || s[steps] == 'R'){
        if(col+1 <= 6 && v[row][col+1] == 0){
            final_boss(ans, steps+1, s, row, col+1, v);
        }
    }

    v[row][col] = 0;

}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    while(t--){
        string s;
        cin >> s;
        int steps = 0;
        int ans = 0;
        vector<vector<int>> v(7, vector<int>(7, 0));
        final_boss(ans, steps, s, 0, 0, v);
        cout << ans << endl;
    }
    return 0;
}