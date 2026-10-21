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
    vll cost(19);
    ll c = 1;
    for (ll i = 0; i < 19; ++i) {
        cost[i] = c*3 + i*(c/3);
        c *= 3;
    }

    // When we want to extract the "digit" of number, we pretty much have to do it from the "lowest" digit first
    ll min_cost = 0;
    ll sz = 0;
    while (n) {
        min_cost += (n % 3) * cost[sz];
        n /= 3;
        ++sz;
    }
    cout << min_cost << '\n';

}

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

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef pair<int,int> pii;
// typedef pair<ll,ll> pll;
// typedef vector<int> vi;
// typedef vector<ll> vll;

// #define all(x) (x).begin(), (x).end()
// #define F first
// #define S second

// const int MOD = 1e9 + 7;
// const int INF = 1e9;
// const ll LINF = 1e18;

// ll log3(ll n) {
//     ll x = 0;
//     while (n >= 3) {
//         x += 1;
//         n /= 3;
//     }
//     return x;
// }

// ll pow3(ll x) {
//     ll res = 1;
//     for (int i = 0; i < x; ++i) res *= 3;
//     return res;
// }

// void solve() {
//     // We buy 3^x melons for (3^x+1) + (x * 3^x-1) coins
//     // We want to minimize the number of deals we do. So buy the biggest amount of water melons we can per deal. 

//     ll n; 
//     cin >> n;
    
//     ll cost = 0;
//     while (n > 0) {
//         ll x = log3(n);
//         cost += pow3(x+1) + x * pow3(x-1);
//         n -= pow3(x);
//     }
//     cout << cost << '\n';
// }

// /*
// It is always possible. We can buy one melon at a time for 3^x+1 + x*3^x = 3 coins. 
// Take x = floor[log3(n)] 
// cost += 3^(x+1) + x * 3^(x-1) == 3^x-1 [3^2 + x]
// n -= 3^x;
// repeat.

// PROOF
// We want to minimize the number of deals needed, and determine its cost. 
// Buying bigger batches is more costly. But nonetheless, we do it. 

// We find the largest 3^x <= n. Then we buy 3^n melons, add that to cost, add n -= 3^n.
// Buying the most watermelons each time is best, since we want to minimize the number of deals (greedy). 
// */

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1;
//     cin >> t;
//     while (t--) {
//         solve();
//     }

//     return 0;
// }