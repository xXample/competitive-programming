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

/*
Construct two seperate arrays. 
vector<int> inside, outside
*/ 

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vi inside, outside;
    for (int i = 1; i <= n; ++i) {
        int val; cin >> val;
        if (x < i && i <= y) inside.push_back(val);
        else outside.push_back(val);
    }

    int min_idx = 0, min_val = INF;
    for (int i = 0; i < inside.size(); ++i) {
        if (inside[i] < min_val) {
            min_val = inside[i];
            min_idx = i;
        }
    }

    if (min_idx > 0) {
        reverse(inside.begin(), inside.end());
        reverse(inside.begin(), inside.end() - min_idx);
        reverse(inside.end() - min_idx, inside.end());
    }

    int idx = 0;
    while (idx < outside.size() && outside[idx] < inside[0]) {
        cout << outside[idx] << ' ';
        ++idx;
    }
    for (auto i : inside) cout << i << ' ';
    while (idx < outside.size()) {
        cout << outside[idx] << ' ';
        ++idx;
    }
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