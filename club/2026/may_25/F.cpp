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

    if (x > y || ((x+y) % 2 == 0 && (x==0))) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";

    if (x == y || x + 1 == y) {
        for (int i = 1; i < x+y; ++i) {
            cout << i << ' ' << i+1 << '\n';
        }
        return;
    }

    if (x % 2 == y % 2) {
        for (int i = 1; i < x+x; ++i) {
            cout << i << ' ' << i+1 << '\n';
        }
        for (int i = x+x+1; i <= x+y; ++i) {
            cout << 1 << ' ' << i << '\n';
        }
        return;
    }

    if (x % 2 != y % 2) {
        for (int i = 1; i < x+x+1; ++i) {
            cout << i << ' ' << i+1 << '\n';
        }
        for (int i = x+x+2; i <= x+y; ++i) {
            cout << 1 << ' ' << i << '\n';
        }
        return;
    }
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