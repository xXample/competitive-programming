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
    vi a(n); 
    for (auto &i : a) cin >> i;
    vi b(n); 
    for (auto &i : b) cin >> i;

    vi freq(n+1, 0);
    for (auto i : b) {
        if (i == -1) continue;
        if (freq[i] > 0) {
            cout << "NO\n";
            return;
        }
        ++freq[i];
    }
    int margin = n - k;
    vi existence(n+1, 0);
    for (int i = margin; i < n - margin; ++i) {
        int val = a[i];
        existence[val] = 1;
    }
    
    for (int i = 0; i < n; ++i) {
        if (b[i] == -1) continue;
        if (i < margin || i >= n - margin){
            if (b[i] != a[i]) {
                cout << "NO\n";
                return;
            }
        } 
        else {
            int val = b[i];
            if (existence[val] != 1) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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