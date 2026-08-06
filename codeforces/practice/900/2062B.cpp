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
    int n; cin >> n;
    vi a(n);
    for (auto &i : a) cin >> i;
    for (int i = 1; i <= (n+1)/2; ++i) {
        if (a[i-1] >= 2*(n-i) + 1 && a[n-i-1] >= 2*(n-i) + 1) {
            continue;
        }
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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