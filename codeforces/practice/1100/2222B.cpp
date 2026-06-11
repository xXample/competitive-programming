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
const int INF = 1e10;
const ll LINF = 1e18;

void solve() {
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (auto &i : a) cin >> i;
    vi x(m);
    for (auto &i : x) cin >> i;
    ll res = 0;
    for (auto i : a) res += i;

    priority_queue<int> evens, odds;
    // evens.reserve((n+1)/2);
    // odds.reserve(n/2);
    for (int i = 0; i < n; i += 2) {
        // evens.push_back(a[i]);
        evens.push(a[i]);
    }
    for (int i = 1; i < n; i += 2) {
        odds.push(a[i]);
        // odds.push_back(a[i]);
    }
    // sort(evens.begin(), evens.end());
    // sort(odds.begin(), odds.end());

    for (auto xi : x) {
        xi -= 1;
        if (xi % 2 == 0 && !evens.empty()) {
            res -= evens.top();
            evens.pop();
            evens.push(0);
        } 
        else if (!odds.empty()) {
            res -= odds.top();
            odds.pop();
            odds.push(0);
        }
    }

    cout << res << '\n';

    // for (auto i : a) cout << i << ' '; cout << '\n';
    // for (auto i : evens) cout << i << ' '; cout << '\n';
    // for (auto i : odds) cout << i << ' '; cout << '\n';

    // for (auto xi : x) {
    //     xi -= 1;
    //     if (xi % 2 == 0) {
    //         if (!evens.empty()) {
    //             evens.pop_back();
    //         }
    //     }
    //     else {
    //         if (!odds.empty()) {
    //             odds.pop_back();
    //         }
    //     }
    // }

    // for (auto i : a) cout << i << ' '; cout << '\n';
    // for (auto i : x) cout << i-1 << ' '; cout << '\n';
    // for (auto i : evens) cout << i << ' '; cout << '\n';
    // for (auto i : odds) cout << i << ' '; cout << '\n';


    // ll sum = 0;
    // for (auto i : evens) sum += i;
    // for (auto i : odds) sum += i;
    // cout << sum << '\n';

    // for (int i = 0; i < m; ++i) {
    //     int mark_idx = x[i] - 1;
    //     int biggest_idx = x[i] - 1;
    //     for (int j = mark_idx % 2; j < n; j += 2) {
    //         int element = a[j];
    //         if (element > a[biggest_idx]) biggest_idx = j;
    //     }
        // int l = min(mark_idx, biggest_idx);
        // int r = max(mark_idx, biggest_idx);
        // while (l < r) {
        //     swap(a[l], a[r]);
        //     ++l;
        //     --r;
        // }
        // a[mark_idx] = 0;
        // a[biggest_idx] = 0;
    // }
    // ll sum = 0;
    // for (auto i : a) sum += i;
    // cout << sum << '\n';
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