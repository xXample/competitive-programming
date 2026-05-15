#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define F first
#define S second

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    int n, k;
    cin >> n >> k;
    vi a(n), b(k);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    sort(all(a));
    sort(all(b));
    
    ll cost = 0;
    for (auto i : a) cost += i;

    int id = n;
    for (int i = 0; i < k; ++i) {
        id -= b[i];
        if (id >= 0) {
            cost -= a[id];
        } else break;
    }
    cout << cost << '\n';
}



// void solve() {
//     int n, k;
//     cin >> n >> k;
//     deque<int> a(n), b(k);
//     for (auto &i : a) cin >> i;
//     for (auto &i : b) cin >> i;
//     sort(all(a), greater<int>());
//     sort(all(b));
    
//     ll cost = 0;
//     while (a.size() > 0 && b.size() > 0 && a.size() >= b[0]) {
//         int voucher = b[0];
//         b.pop_front();
       
//         for (int i = 0; i < voucher - 1; ++i) {
//             cost += a[0];
//             a.pop_front();
//         }
//         a.pop_front();
//     }
    
//     for (auto i : a) cost += i;
//     cout << cost << '\n';
// }

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