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
    vi a(3);
    cin >> a[0] >> a[1] >> a[2];
    int total = 0;
    while (a[0] != a[1] && a[0] != a[2] && a[1] != a[2]) {
        sort(all(a), greater<int>());
        --a[0];
        ++a[2];
        ++total;
    }
    cout << total << '\n';
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