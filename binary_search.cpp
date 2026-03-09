#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i]; }
    sort(a.begin(), a.end());
        int k;
        cin >> k;
        while(k--){
            int x;
            cin >> x;
            int high = n - 1, low = 0;
            bool found = false;
            while(low <= high){
                int mid =(high + low) / 2; 
                if(a[mid] == x){
                    found = true;
                    break; }
            else if(a[mid] > x){
                high = mid - 1; }
            else {
                low = mid + 1; }}
            if(found){
                cout<<"YES"<<endl; }
            else{
                cout<<"NO"<<endl; }}
    return 0; 
}





























































































































































































