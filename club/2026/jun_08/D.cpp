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

int MEX(vi array, int n) {
    // for (auto i : array) cout << i << ' ';
    // cout << '\n';
    for (int i = 0; i < n; ++i) {
        if (array[i] == 0) return i;
    }
    return n;
}

void solve() {
    int n; cin >> n;
    vi a(2*n);
    vi zeros(2);
    int j = 0;
    for (int i = 0; i < 2*n; ++i) {
        cin >> a[i];
        if (a[i] == 0) {
            zeros[j] = i;
            ++j;
        }
    }

    int best = 1;
    for (int i = 0; i <= 1; ++i) {
        for (int j = 0; j <= 1; ++j) {
            if (i > j) continue;
            int l = zeros[i];
            int r = zeros[j];
            while (l+1 <= r-1) {
                l++;
                r--;
                // cout << a[l] << a[r] << '\n';
            }
            if (l != r && a[l] != a[r]) continue;

            vi array(n, 0);
            array[a[l]] = 1;
            while (l-1 >= 0 && r+1 <= 2*n-1 && a[l-1] == a[r+1]) {
                l--;
                r++;
                array[a[l]] = 1;
            }
            best = max(best, MEX(array, n));
        }
    }
    cout << best << '\n';

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