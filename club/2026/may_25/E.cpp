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

    vi a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int biggest = a[0] ^ a[1];
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            biggest = max(biggest, a[i] ^ a[j]);
        }
    }
    cout << biggest << '\n';

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