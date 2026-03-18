#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;
        long long al = 0, bo = 0, ca = 0;
        long long m;
        cin >> m;
        long long day = 1;
        long long lcm_1 = ((1LL)*(a)*(b))/__gcd(a,b);
        long long lcm_2 = ((1LL)*(c)*(b))/__gcd(b,c);
        long long lcm_3 = ((1LL)*(a)*(c))/__gcd(c,a);
        long long lcm_all = (lcm_1 * c) / __gcd(lcm_1, c);
        long long count_abc = m/lcm_all;
        long long count_ab = m/lcm_1 - count_abc;
        long long count_bc = m/lcm_2 - count_abc;
        long long count_ca = m/lcm_3 - count_abc;
        long long count_a = (m/a) - (count_ab + count_ca + count_abc);
        long long count_b = (m/b) - (count_ab + count_bc + count_abc);
        long long count_c = (m/c) - (count_bc + count_ca + count_abc);
        al += count_abc*2;
        bo += count_abc*2;
        ca += count_abc*2;
        al += count_ab*3;
        bo += count_ab*3;
        bo += count_bc*3;
        ca += count_bc*3;
        ca += count_ca*3;
        al += count_ca*3;
        al += count_a*6;
        bo += count_b*6;
        ca += count_c*6;
        cout << al << " " << bo << " " << ca << endl;
    }
    return 0;
}

