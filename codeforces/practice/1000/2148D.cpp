#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define F first
#define S second

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    int n;
    cin >> n;
    ll total = 0;
    vll odd;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num % 2 == 0) total += num;
        else odd.pb(num);
    }

    if (sz(odd) == 0) {
        cout << 0 << '\n';
        return;
    }
    
    sort(all(odd));
    reverse(all(odd));
    for (int i = 0; i < (sz(odd) + 1) / 2; ++i) {
        total += odd[i];
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