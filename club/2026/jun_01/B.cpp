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
    string s;
    cin >> s;

    int twos = 0, threes = 0;
    int length = 1;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i-1]) {
            ++length;
            if (length == 2) ++twos;
            if (length == 3) {
                ++threes;
                --twos;
            }
            if (length > 3) {
                cout << "NO\n";
                return;
            }
        } 
        else length = 1;
    }

    if (threes == 1 && twos == 0) {
        cout << "YES\n";
    } else if (threes == 0 && (twos <= 2)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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