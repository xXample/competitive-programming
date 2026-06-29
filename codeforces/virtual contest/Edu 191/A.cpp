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
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    int a = (n + x + y - 1) / (x + y);
    int b = z + (n - x*z + (x + 10*y - 1)) / (x + 10*y);
    if (n - x*z < 0) {
        cout << a << '\n';
    } else {
        cout << min(a, b) << '\n';
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