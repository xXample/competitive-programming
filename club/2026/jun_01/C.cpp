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
    string T, B;
    cin >> T >> B;

    if (n == 1) {
        if (T[0] != B[0]) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
        return;
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (
            ((i-1 < 0) || T[i] != T[i-1]) && 
            T[i] != B[i] && 
            ((i+1 > n) || T[i] != T[i+1])
            ) 
            {
            ++cnt;
        } 
        if (
            ((i-1 < 0) || B[i] != B[i-1]) && 
            T[i] != B[i] && 
            ((i+1 > n) || B[i] != B[i+1])
            ) {
            ++cnt;
        }
    }
    // assert(cnt % 2 == 0);
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