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
    int n; cin >> n;
    cout << "1 1 " << n << endl;
    int x; cin >> x;
    cout << "2 1 " << n << endl;
    int y; cin >> y;

    int SIZE = y - x;
    
    int l = 1, r = n;
    while (l <= r) {
        int m = (r + l) / 2;
        cout << "1 " << l << ' ' << m << endl;
        cin >> x;
        cout << "2 " << l << ' ' << m << endl;
        cin >> y;
        if (x == y) l = m+1;
        else r = m-1;
    }
    cout << "! " << l << ' ' << l+SIZE-1 << endl;
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