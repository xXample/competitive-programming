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

// void solve() {
//     int n;
//     cin >> n;
//     vll a(n), b(n);
//     for (auto &i : a) cin >> i;
//     for (auto &i : b) cin >> i;
//     sort(all(a), greater<ll>());
    
//     ll max_score = 0;
//     ll cost = 0;
//     ll level = 0;

//     for (int i = 0; i < n; ++i) {
//         int num_swords = i+1;
//         while (level < n && num_swords >= cost + b[level]) cost += b[level], ++level;
//         max_score = max(max_score, a[i] * level);
//     }
//     cout << max_score << '\n';
// }

void solve() {
    int n;
    cin >> n;
    vll a(n), b(n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    sort(all(a));
    
    vll cost(n+1);
    for (int i = 1; i < n+1; ++i) {
        cost[i] = cost[i-1] + b[i-1];
    }

    ll max_score = 0;
    ll level = n;
    for (int i = 0; i < n; ++i) {
        int num_swords = n-i;
        while (cost[level] > num_swords) --level;
        max_score = max(max_score, a[i] * level);
    }
    
    cout << max_score << '\n';
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