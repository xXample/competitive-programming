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
    string a, b; 
    cin >> a >> b;

    // Create a1, a2, and b1, b2
    // Then, "bubble sort" one to the other. Count #of operations. 

    // string a1, a2, b1, b2;
    // for (int i = 0; i < n; ++i) {
    //     if (i % 2 == 0) {
    //         a1 += a[i]; 
    //         b1 += b[i];
    //     }
    //     else {
    //         a2 += a[i];
    //         b2 += b[i];
    //     }
    // }

    ll num_swaps_total = 0;
    for (int rep = 0; rep < 2; ++rep) {
        for (int i = rep; i < n; i += 2) {
            if (a[i] == b[i]) continue;
            int ptr = i;
            ll num_swaps = 0;
            while (ptr < n && a[ptr] != b[i]) {
                ptr += 2;
                ++num_swaps;
            }
            if (ptr < n) {
                num_swaps_total += num_swaps;
                swap(a[ptr], a[i]);
            }
            else {
                cout << -1 << '\n';
                return;
            }
        }
    }
    cout << num_swaps_total << '\n';


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