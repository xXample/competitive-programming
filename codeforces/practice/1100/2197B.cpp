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
    int n;
    cin >> n;
    vi p(n), a(n), order(n+1);
    for (auto &i : p) cin >> i;
    for (auto &i : a) cin >> i;
    
    for (int i = 0; i < n; ++i) {
        int value = p[i];
        order[value] = i;
    }
    
    for (int i = 0; i < n-1; ++i) {
        int value_curr = a[i];
        int value_next = a[i+1];
        if (order[value_curr] > order[value_next]) {
            cout << "NO\n";
            return;
        }
    }
    
    cout << "YES\n";
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