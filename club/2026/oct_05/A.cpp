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
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    int cost = 0;

    int l = 0, r = n-1;
    while (l < r) {
        if (s[l] != s[r]) {
            if (s[l] == c || s[r] == c) ++cost;
            else cost += 2;
        }
        ++l;
        --r;
    }
    cout << cost << '\n';

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