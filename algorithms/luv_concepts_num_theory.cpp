modulo formulas
(a+b)%M = ( (a%M) + (b%M) ) %M
(a-b)%M = ( (a%M) - (b%M) +M ) %M
(a*b)%M = ( (a%M) * (b%M) ) %M
(a/b)%M = ( (a%M) + (b^(-1) %M) ) %M
(a^b)%M = ((a%M)^b) %M

bit operators - and(&),or(|),xor(^),not(!),leftshift(<<),rightshift(>>)
for ex :-
left shift --> 3 << 1 //shifts the binary of the lhs by 1 place
                before binary of 3 -- 11 
                after leftshift binary of 3 becomes -- 110
               3 << 2
                before binary of 3 -- 11
                after leftshift binary of 3 becomes -- 1100 

right shift --> 3 >> 1 //shifts the binary of the lhs by 1 place
                before binary of 3 -- 11 
                after rightshift binary of 3 becomes -- 1
               6 << 2
                before binary of 6 -- 110
                after rightshift binary of 6 becomes -- 1 
               6 << 1
                before binary of 6 -- 110
                after rightshift binary of 6 becomes -- 11

we can store 2^(32) - 1 in unsigned int or 32 bits 
but we can only store 2^(31) - 1 in int as one bit is stored in it for determining the sign of the integer.

IMP - 1<< n = 2^n;

suppose a binary number - 10111011
isme LSB(least significant bit) rikghtmost bit hota hai aur 
MSB(most significant bit) leftmost bit hotahai.
isme indexing right to left hoti hai. 
If a bit is set than its value is 1 
and if it is unset then its value is 0.

tricks :-
1) agar kabhi bhi kisi index pe hume pata lagana hai ki woh numbe set hai
ya unset toh uske liye ek dusra number lenge jisme baaki saare digit 0 honge
sirf us index wala number 1 hoga aur phir usse hum and le lenge original
number ke saath. baaki sb toh zero ban jayenge aur agar jaha oe hume check krna tha 
waha pe agar hume 1 milta hai iska mtlb upar original mai 1 tha kyunki and
mai 1 tabhi milta hai jab dono 1 honge au agar hume 0 milta hai iska mtlb original
digit mai 0 tha kyunki 0 and 1 toh 0 deta hai to aise hum determine ckar skte hai.

2) 2 ki power ke just ek pehle wale number ke binary ka har digit 1 hota 
hai.

suppose there is a binary stroed in a=1001100
~a will print the invert of the binary i.e. 0110011

to set a bit at position i -- x | (1<<i)
to unset a bit at position i -- x & (~(1<<i))
to toggle a bit at position i -- x ^ (1<<i)

to divide a number my 2 -- n >> 1
to miltiply a number my 2 -- n << 1

we can see that even number's rightmost bit is always zero and odd 
number's rightmost bit is always 1.
we can check if a number is even or odd using bit manipulation by
--- if we take and(&) with 1 then either the whole number will be zero 
then it is even else it will be one which means it is odd.

to convert a char from lowercase to uppercase or vice versa
char A='A';
char a = A | (1<<5); // setting a bit
cout << a << endl; // this will give 'a' as answer
cout << char(a & (~(1<<5))) << endl; 
zeist is that uppercase letters mai 5th bit unset hoti hai aur
lowecase letters mai 5th bit set hoti hai.
easy way to convert a lowercase to uppercase ==
cout << char('a' & '_') << endl;
easy way to convert a uppercase to lowercase ==
cout << char('A' | ' ') << endl;

to clear all lsb's of a number
int b = (a &(~((1<<(i+1))-1)));
to clear all msb's of a number
int b = (a &((1<<(i+1))-1));

to check power of 2
if(i&(i-1)){
    cout << "not power of 2"; }
else{
    cout << "power of 2"; }

x^x == 0;
x^0 == x;
x^y^z == z^x^y == z^y^x

to swap two numbers

a = a^b;
b = b^a;
a = a^b;
if we want to see which number has an odd count in an array is to take xor 
of every element.
bitmasking wale vudeo  ke phle 11 min phirse dkh lena

using bitmasking on pro level. basically bitmasking se storing all
subsets of an array possible.

vector<vector<int>> subsets(vector<int> &nums){
    int n = nums.size();
    int subset_ct = (1<<n);
    vector<vector<int> > subsets;
    for(int mask = 0; mask < subset_ct; mask++){
        vector<int> subset;
        for(int i = 0; i < n; i++){
            if(mask & (1 << i) != 0){
                subset.push_back(nums[i]);
            }
        }
        subset.push_back(subset);
    }
}

LCM(a,b) = (a*b)/GCD(a,b);

to calculate gcd using a function
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
gd of three numbers
gcd(gcd(a,b),c)

to calculate the power of any number we don't use pow(a,b) as it gives answer
in double datatype which has precision errors. for that we use binary 
exponentation recursion.'
using recursion
int binExpRec(int a, int b){
    if(b==0) return 1;
    long long res = binExpRec(a,b/2);
    if(b&1){
        return (a*((res * 1LL * res)%M))%M }
    else{
        return (res * 1LL * res)%M; }
}

using iterator
int binExpIter(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans*1LL*a)%M; }
        a = (a*1LL*a)%M;
        b >>= 1;
    }
    return ans;
}

//how to find if a number is prime or not
int n;
cin >> n;
bool is_prime = true;
for(int i = 2; i * i <= n; i++){
    ig(n%i == 0){
        is_prime = false;
        break; }
} 

gcd(a1,a2,⋯,ai)≤gcd(a1,a2)≤2


If n%4 == 0 XOR sum is n
If n%4 == 1 XOR sum is 1
If n%4 == 2 XOR sum is n+1
If n%4 == 3 XOR sum is 0