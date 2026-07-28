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

bool is_sorted(vi a) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        if (a[i] != i+1) return false;
    }
    return true;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vi p(n);
    for (auto &i : p) cin >> i;
    int interval = gcd(x, y);
    for (int i = 0; i < interval; ++i) {
        vector<int> array;
        for (int j = i; j < n; j+= interval) {
            array.push_back(p[j]);
        }
        sort(all(array));
        reverse(all(array));
        for (int j = i; j < n; j += interval) {
            p[j] = array.back();
            array.pop_back();
        }
    }

    cout << ((is_sorted(p)) ? "YES\n" : "NO\n");







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