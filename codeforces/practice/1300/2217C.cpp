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
    int n, m, a, b; 
    cin >> n >> m >> a >> b;

    function<int(int, int)> gcd = [] (int x, int y) {
        while (y != 0) {
            int temp = x;
            x = y;
            y = temp % y;
        }
        return x;
    };

    if (gcd(n, a) == 1 && gcd(m, b) == 1 && gcd(n, m) <= 2) cout << "YES\n";
    else cout << "NO\n";
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