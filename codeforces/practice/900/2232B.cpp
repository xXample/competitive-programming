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
    vll a(n); for (auto &i : a) cin >> i;

    ll cream_amount = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] >= a[i-1]) {
            cream_amount += a[i] - a[i-1];
            a[i] = a[i-1];
        }
        else if (a[i] + cream_amount >= a[i-1]) {
            cream_amount -= a[i-1] - a[i];
            a[i] = a[i-1];
        }
        else {
            a[i] += cream_amount;
            cream_amount = 0;
            int level = a[i-1];
            int width = i;
            
            // while (a[i] < level) {
            //     a[i] += width;
            //     --level;
            // }
            ll x = (level-a[i] + width) / (width+1);
            a[i] += width*x;
            level -= x;

            cream_amount = a[i] - level;
            a[i] = level;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " \n"[i==n-1];
    }



    /*
    1: unmodified
    2: If 1 > 2, then balanced version. Otherwise set 1 = 2;
    3: If 2 > 3, then balanced version. Otherwise set 3 = 2;
    4: If 4 > 3, then balanced version. Otherwise set 4 = 3;
    */

    /*
    If the first is the minimum, the everythign else must equal that
    Otherwise, it's more complicated.
    */

    /*
    Have variable for holding cream_amount that's extra.
    Check difference between current and next. 
    If current > next, by how much? Using index & cream_amount, we can know if we can "make up" the difference. 
    Otherwise, we add the extra in next to cream_amount
    */

    /*
    Algorithm: Set first index to equal a[1]. Then for each element, 
    if current <= next, we truncate next and add extra to cream_amount. 
    else if next + cream_amount >= current, set next = current, cream_amount -= (current - next)
    else we try to make next = some level. <-- leave to implementation.
    */

    /*
    PROOF:
    first index should be maximized, so it equals a[1].

    Suppose the first i indices are maximized. 
    now if a[i+1] >= a[i], we can only make it level by reducing a[i+1], so cream_amount += a[i+1] - a[i].
    but if a[i+1] < a[i], our algorithm maximizes a[i+1] by first using extra cream, and if still not level, then we add some amount at a time. 
    Thus the first i+1 indicies are maximized. 
    */
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