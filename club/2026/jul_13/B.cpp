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
    int duration, flip, leave;
    cin >> duration >> flip >> leave;
    int ans = 0;
    int num_flips = leave / flip;
    int flip_to_leave = leave % flip;

    if (duration <= flip) ans = max(0, duration - flip_to_leave);
    else if (num_flips % 2 == 0) ans = duration - flip_to_leave;
    else ans = flip - flip_to_leave;
    cout << ans << '\n';
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