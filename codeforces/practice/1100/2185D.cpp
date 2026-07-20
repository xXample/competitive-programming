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
    int n, m, h;
    cin >> n >> m >> h;
    vi a(n), b(m), c(m);
    for (auto &i : a) cin >> i;
    for (int i = 0; i < m; ++i) cin >> b[i] >> c[i];
    for (auto &i : b) --i;

    vector<pii> changes;
    for (int i = 0; i < m; ++i) {
        changes.push_back({b[i], c[i]});
        a[b[i]] += c[i];

        if (a[b[i]] > h) {
            while (!changes.empty()) {
                pii change = changes.back();
                changes.pop_back();
                a[change.F] -= change.S;
            }
        }
    }
    for (int i = 0; i < n; ++i) cout << a[i] << " \n"[i==n-1];
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