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
    ll n; cin >> n;
    vll six, three, two, one;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (a % 6 == 0) six.push_back(a);
        else if (a % 3 == 0) three.push_back(a);
        else if (a % 2 == 0) two.push_back(a);
        else one.push_back(a);
    }

    vll res;
    res.reserve(n);
    for (auto i : six) res.push_back(i);
    for (auto i : three) res.push_back(i);
    for (auto i : one) res.push_back(i);
    for (auto i : two) res.push_back(i);

    for (auto i : res) cout << i << ' ';
    cout << '\n';
    

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