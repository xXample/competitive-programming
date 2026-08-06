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


ll cost(vll pos) {
    if (pos.empty()) return 0;
    ll med = pos.size() / 2;

    ll cost_sum = 0;
    for (ll i = 0; i < pos.size(); ++i) {
        cost_sum += abs((pos[i] - i) - (pos[med] - med));
    }

    // ll cost_sum = 0;
    // for (ll i = 0; i < pos.size(); ++i) {
    //     pos[i] -= i;
    // }
    // sort(all(pos));
    // for (auto i : pos) cost_sum += abs(i - pos[med]);

    return cost_sum;
}

void solve() {
    int n; 
    cin >> n;
    string s;
    cin >> s;

    vll a, b;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') a.push_back(i);
        else b.push_back(i);
    }
    cout << min(cost(a), cost(b)) << '\n';
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