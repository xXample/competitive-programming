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
    ll n, k;
    cin >> n >> k;

    // Count of squares to keep i.e. not exit
    ll cnt_retain = n*n - k;
    
    if (cnt_retain == 1) {
        cout << "NO\n";
        return;
    }
    else {
        cout << "YES\n";
    }

    if (cnt_retain == 0) {
        for (ll row = 1; row <= n; ++row) {
            for (ll col = 1; col <= n; ++col) {
                cout << "R";
                if (col == n) cout << '\n'; 
            }
        }
        return;
    }

    for (ll row = 1; row <= n; ++row) {
        for (ll col = 1; col <= n; ++col) {
            if (col == 1 && row == 1) {
                --cnt_retain;
                cout << 'R';
            } else if (cnt_retain == 0) {
                cout << 'R';
            } else {             // Non-exiting cells
                --cnt_retain;
                if (row == 1) {
                    cout << 'L';
                }
                else {
                    cout << 'U';
                }
            }

            // New line if last column of row. 
            if (col == n) {
                cout << '\n';
            }
        }
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

/*
Construction for this is found: required that n^2 - k != 1, which is #of cells retaining i.e. not exiting. 
Afterwards, just construct. 
*/