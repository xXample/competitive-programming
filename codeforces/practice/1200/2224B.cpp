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
    for (auto &i : a) cin >> i;

    sort(a.begin(), a.end(), greater<int>());
    reverse(a.begin() + 1, a.end());
    int l = 1, r = 2;
    while (r < n) {
        if (a[l] == l-1) { 
            ++l, ++r;
            continue;
        } 
        while (r < n && a[r] != l-1) ++r;
        if (r < n && a[r] == l-1) {
            swap(a[l], a[r]);
            ++l, ++r; 
        }
    }

    vector<bool> seen(n, false);
    int mex = 0;
    ll mex_sum = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < n) seen[a[i]] = true;
        while (mex < n && seen[mex]) ++mex;
        // seen.insert(a[i]);
        // while (bool not_mex = seen.find(mex) != seen.end()) ++mex;
        mex_sum += mex;
    }

    ll total = mex_sum + 1LL * a[0] * n;
    cout << total << '\n';


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