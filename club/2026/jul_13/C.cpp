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
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    int a = n, b = n;
    // rounding down always leads to an even number
    // Thus, rounding up is always an odd number
    
    while (a != k && b != k && n > 1) {
        a = n/2;
        b = (n+1)/2;
        ++cnt;
        n = (a % 2 == 1) ? a : b;
    }
    if (a != k && b != k) cnt = -1;
    cout << cnt << '\n';
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