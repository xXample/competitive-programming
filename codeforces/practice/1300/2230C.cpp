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
    ll n; cin >> n;
    vll not_ones; not_ones.reserve(n);
    ll ones = 0;
    ll total = 0;
    for (int i = 0; i < n; ++i) {
        ll temp; cin >> temp;
        if (temp == 1) ones++;
        else {
            not_ones.push_back(temp);
            total += temp;
        }
    }

    // If there exist no ≥2s, cout 0 <-- can be done easily. 
    // If the sum is less than 3, cout 0 <-- implicit, do at end.
    if (total < 3 && ones <= 0) {
        cout << 0 << '\n';
        return; 
    }

    if (not_ones.size() == 1) {
        ll num = not_ones.back(); 
        not_ones.pop_back();
        total += min(num / 2, ones);
        cout << total << '\n';
        return;
    }

    // "Insert" the ones where possible.
    while (!not_ones.empty() && ones > 0) {
        ll num = not_ones.back();
        num = (num - 2) / 2; // <-- The #of groups of 2 we can "pull off" given the whole is >= 4
        total += min(num, ones);
        ones -= min(num, ones);
        not_ones.pop_back();
    }

    cout << total << '\n'; 
    return;
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