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
    int n, t, s; 
    cin >> n >> t >> s;
    string u; 
    cin >> u;

    int min_t = 0, max_t = 0, num_seated = 0;
    for (char c : u) {
        if (c == 'I' ) {
            if (min_t < t) {
                ++min_t;
                ++num_seated;
                if (max_t < t) ++max_t;
            }
        }
        else if (c == 'E') {
            if (num_seated < s * max_t) {
                ++num_seated;
                if (num_seated > s * min_t) ++min_t;
            }
        }
        else if (c == 'A') {
            if (num_seated < s * t) {
                ++num_seated;
                if (max_t < t) ++max_t;
                if (num_seated > s * min_t) ++min_t;
            }
        }
    }
    cout << num_seated << '\n';
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