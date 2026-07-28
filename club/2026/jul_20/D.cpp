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
    ll n, m;
    cin >> n >> m;
    vll a(n); 
    vll b(m);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    sort(all(b));
    while (!b.empty()) {
        ll right_idx = b.back() - 1;
        b.pop_back();

        ll left_idx = -1;
        if (!b.empty()) left_idx = b.back() - 1;

        ll right = a[right_idx];
        ll left = 0;
        for (int i = left_idx + 1; i < right_idx; ++i) {
            left += a[i];
        }

        ll no_flip = left + right;
        ll flip = -left - right;

        if (flip > no_flip) {
            for (int i = left_idx + 1; i <= right_idx; ++i) {
                a[i] *= -1;
            }
        }
    }


    ll total = 0; 
    for (auto i : a) total += i;
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