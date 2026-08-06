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

    vi cnt(n+1, 0);
    for (auto i : a) {
        ++cnt[i];
    }

    for (auto i : cnt) {
        if (i % k != 0) {
            cout << 0 << '\n';
            return;
        }
    }

    ll ans = 0;
    vi cnt_sub(n+1, 0);
    for (int l = 0, r = 0; r < n; ++r) {
        int val = a[r];
        ++cnt_sub[val];
        while (cnt_sub[val] * k > cnt[val]) {
            --cnt_sub[a[l]];
            ++l;
        }
        ans += r - l + 1;
    }   

    cout << ans << '\n';
}

/*
How many awesome subarrays are there? 
The count of each value must be a multiple of k 
If that isn't possibly, then none are possible.

Also, each multiset must be the *same*. All k of them. 
Say you give me a subarray. How do I know if it's awesome? 
We first checked each cnt[i] % k == 0. 
So now we just need to know all values are still distributable. 

Let c[i] be the cnt of i in subarray. 
We must know if (cnt[i] / c[i]) >= k  I.E. (cnt[i] >= c[i] * k)
If so, then we're good. 
Otherwise, there's a shortage. This is no good. 

We now know if a subarray is awesome. How do count #of subarrays? 
*/

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