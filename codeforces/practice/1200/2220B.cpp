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
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (auto &i : a) cin >> i;

    int ptr = a[0];
    int cnt = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] == ptr) ++cnt;
        else {
            cnt = 1;
            ptr = a[i];
        }
        if (cnt == m) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
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