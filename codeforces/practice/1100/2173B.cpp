#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) (x).begin(), (x).end()
#define F first
#define S second

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    ll n; 
    cin >> n;
    vll a(n), b(n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    
    ll k_min = 0, k_max = 0;
    for (int i = 0; i < n; ++i) {
        ll val_min = min(k_min - a[i], b[i] - k_max);
        ll val_max = max(k_max - a[i], b[i] - k_min);
        k_min = val_min;
        k_max = val_max;
    }
    cout << k_max << '\n';
    



}
/*
There will be 0 --> n steps in total. 
Have 2 variables, k_min, k_max, which represent the minimum and maximum possible k value. 
At step 0, k_min = 0 = k_max.
Now it's "trivial" that to find the k_min and k_max value at step i, you need only k_min, k_max from step i-1.
This is because using middling k values will only get you middling results. 
Thus, this will allow us to find the maximum k_value at the end. 
This is proof enough for me. 
*/



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}