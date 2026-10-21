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
    vi b(n);
    vi count_b(n+1, 0); 
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        count_b[b[i]]++;
    }

    for (int i = 1; i <= n; ++i) {
        int val = i;
        int cnt = count_b[i];
        if (cnt % val != 0) {
            cout << -1 << '\n';
            return;
        }
    }

    vi elements_a(n+1, 0);
    vi a(n);
    int new_val = 1;

    for (int i = 0; i < n; ++i) {
        int val = b[i];
        if (elements_a[val] == 0 || count_b[val] % val == 0) {
            elements_a[val] = new_val++;
        }
        count_b[val]--;
        a[i] = elements_a[val];
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " \n"[i==n-1];
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