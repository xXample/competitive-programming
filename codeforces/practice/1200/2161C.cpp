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
    ll n, X;
    cin >> n >> X;
    vll a(n); 
    for (auto &i : a) cin >> i;
    sort(all(a));

    vll a_ordered;

    ll S = 0;
    ll points = 0;
    ll l = 0, r = n-1;
    while (l <= r) {
        if ((S + a[r]) / X > S / X) {
            S += a[r];
            points += a[r];
            a_ordered.push_back(a[r]);
            --r;
        }
        else {
            S += a[l];
            a_ordered.push_back(a[l]);
            ++l;
        }
    }
    cout << points << '\n';
    for (auto i : a_ordered) cout << i << ' ';
    cout << '\n';

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