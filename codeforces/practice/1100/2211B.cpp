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
    int x, y;
    cin >> x >> y;
    int n;
    if (x < y) n = y - x;
    else n = x - y;
    int num_div = 1;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0) ++num_div;
    }
    cout << num_div % 676767677 << '\n';
    for (int i = 0; i < x; ++i) cout << "1 ";
    for (int i = 0; i < y; ++i) cout << "-1 ";
    cout << '\n';
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