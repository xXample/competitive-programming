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

    vector<vi> sets(n);
    vi cnt(m+1, 0);
    for (int i = 0; i < n; ++i) {
        int set_size;
        cin >> set_size;
        sets[i] = vi(set_size);
        for (int j = 0; j < set_size; ++j) {
            cin >> sets[i][j];
            cnt[sets[i][j]] += 1;
        }
    }

    for (int i = 1; i <= m; ++i) {
        if (cnt[i] == 0) {
            cout << "NO\n";
            return;
        }
    }

    int num_choices = 1;
    for (vi set : sets) {
        bool is_redundant = true;
        for (int elem : set) {
            cnt[elem] -= 1;
            if (cnt[elem] <= 0) {
                is_redundant = false;
            }
        }

        if (is_redundant) {
            num_choices += 1;
        }

        // Clean up
        for (int elem : set) {
            cnt[elem] += 1;
        }
    }

    cout << ((num_choices >= 3) ? "YES\n" : "NO\n");
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