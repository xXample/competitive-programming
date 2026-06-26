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
    int a, b;
    cin >> a >> b;
    vi result; result.reserve(100);
    int full_a = a;

    int x = 1;
    while (x <= a) {
        if ((a & x) == 0) result.push_back(x);
        
        full_a |= x;
        x <<= 1;
    }

    // cout << result.size() << '\n';
    // return;

    if (full_a < b) {
        cout << -1 << '\n';
        return;
    }

    x = 1;
    while (x <= full_a) {
        if ((b & x) == 0) result.push_back(x);
        x <<= 1;
    }

    cout << result.size() << '\n';
    if (!result.empty()) {
        for (auto i : result) cout << i << ' ';
        cout << '\n';
    }
    
    








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