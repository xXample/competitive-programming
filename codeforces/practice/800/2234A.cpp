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
    /*
    Since x ≥ y, and z = x (mod y), then z < y. So x ≥ y > z. So this pattern continues. Thus the sequence must be non-increasing.
    Therefore, we can simply sort from greatest-to-least, and see if it's valid. And return the first two elements if so.
    */

    int n; cin >> n;
    vi a(n); for (auto &i : a) cin >> i;
    sort(all(a), greater<int>());

    for (int i = 0; i < n-2; ++i) { 
        if (a[i+2] != a[i] % a[i+1]) {
            cout << -1 << '\n';
            return;
        }
    }

    cout << a[0] << ' ' << a[1] << '\n';
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