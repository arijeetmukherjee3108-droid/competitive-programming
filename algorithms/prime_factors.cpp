int n;
cin >> n;
vector<int> prime_factors;
for(int i = 2; i*i <= n; i++){
    while(n%i == 0){
        prime_factors.push_back(i);
        n /= i;
    }
    if(n > 1){
        prime_factors.push_back(n);
    }
}

all prime factors using sieve algorithm
const int N = 1e7+10;
vector<bool> isPrime(N,1);
int main(){
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i < N; i++){
        if(isPrime[i] == true){
            for(int j = 2*i; j < n; j += i){
                isPrime[j] = false; }}}
}
2 3 5 4