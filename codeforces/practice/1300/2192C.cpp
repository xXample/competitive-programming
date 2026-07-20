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
    ll n, h, k;
    cin >> n >> h >> k;
    
    vector<ll> a(n);
    vector<ll> damage(n+1);
    for (ll i = 0; i < n; ++i) cin >> a[i];
    for (ll i = 1; i < n+1; ++i) damage[i] = a[i-1] + damage[i-1];
    
    ll num_full_rounds = h / damage[n];
    ll num_sec = (n + k) * num_full_rounds;
    ll remaining_h = h % damage[n];
    if (remaining_h == 0) {
        cout << num_sec - k << '\n'; // last full round don't reload
        return;
    }

    ll bullets_shot = 1;
    while (remaining_h > damage[bullets_shot]) ++bullets_shot;

    ll a_swap = -INF;
    for (ll i = bullets_shot-1; i < n; ++i) a_swap = max(a[i], a_swap);

    vll min_prefix(bullets_shot+1, INF);
    for (ll i = 1; i <= bullets_shot; ++i) {
        min_prefix[i] = min(a[i-1], min_prefix[i-1]);
    }

    for (ll i = 1; i <= bullets_shot; ++i) {
        ll diff = a_swap - min_prefix[i];
        if (damage[i] + diff >= remaining_h) {
            cout << num_sec + i << '\n';
            return;
        }
    }
    cout << "FAIL\n";
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