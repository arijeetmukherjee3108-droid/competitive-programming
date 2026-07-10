#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        long long digit = m%10;
        long long quot = n/m;
        long long sum = 0;
        int a9[] = {9,8,7,6,5,4,3,2,1,0};
        long long rem = 0;
        int sum9 = 45;
        if(digit == 9){
            rem = quot/10;
            sum += sum9*rem;
            long long remi = quot%10;
            for(int i = 0; i < remi; i++){
                sum += a9[i]; }}

        int a8[] = {8,6,4,2,0};
        int sum8 = 20;
        if(digit == 8){
            rem = quot/5;
            sum += sum8*rem;
            long long remi = quot%5;
            for(int i = 0; i < remi; i++){
                sum += a8[i]; }}

        int a7[] = {7,4,1,8,5,2,9,6,3,0};
        int sum7 = 45;
        if(digit == 7){
            rem = quot/10;
            sum += sum7*rem;
            long long remi = quot%10;
            for(int i = 0; i < remi; i++){
                sum += a7[i]; }}

        int a6[] = {6,2,8,4,0};
        int sum6 = 20;
        if(digit == 6){
            rem = quot/5;
            sum += sum6*rem;
            long long remi = quot%5;
            for(int i = 0; i < remi; i++){
                sum += a6[i]; }}
            
        int a5[] = {5,0};
        int sum5 = 5;
        if(digit == 5){
            rem = quot/2;
            sum += sum5*rem;
            long long remi = quot%2;
            for(int i = 0; i < remi; i++){
                sum += a5[i]; }}

        int a4[] = {4,8,2,6,0};
        int sum4 = 20;
        if(digit == 4){
            rem = quot/5;
            sum += sum4*rem;
            long long remi = quot%5;
            for(int i = 0; i < remi; i++){
                sum += a4[i]; }}

        int a3[] = {3,6,9,2,5,8,1,4,7,0};
        int sum3 = 45;
        if(digit == 3){
            rem = quot/10;
            sum += sum3*rem;
            long long remi = quot%10;
            for(int i = 0; i < remi; i++){
                sum += a3[i]; }}

        int a2[] = {2,4,6,8,0};
        int sum2 = 20;
        if(digit == 2){
            rem = quot/5;
            sum += sum2*rem;
            long long remi = quot%5;
            for(int i = 0; i < remi; i++){
                sum += a2[i]; }}
             
        int a1[] = {1,2,3,4,5,6,7,8,9,0};
        int sum1 = 45;
        if(digit == 1){
            rem = quot/10;
            sum += sum1*rem;
            long long remi = quot%10;
            for(int i = 0; i < remi; i++){
                sum += a1[i]; }}
        cout << sum << endl;
    }
    return 0;
}