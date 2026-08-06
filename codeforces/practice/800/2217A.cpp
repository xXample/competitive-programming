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
    // If sum odd, S wins. 
    /* 
    If sum even {
        if k*n even, S wins
        else Y wins
    }
    */
    int n, k;
    cin >> n >> k;

    vi a(n);
    for (auto &i : a) cin >> i;

    int total = 0;
    for (auto i : a) total += i;


    // int total = 0;
    // for (int i = 0; i < n; ++i) {
    //     int val; 
    //     cin >> val;
    //     total += val;
    // }
    if (total % 2 == 1 || n*k % 2 == 0) 
        cout << "YES\n";
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