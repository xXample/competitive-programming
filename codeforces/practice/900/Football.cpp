#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define F first
#define S second

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    string bits;
    cin >> bits;
    int cnt = 1;
    for (int i = 1; i < sz(bits); ++i) {
        if (bits[i] == bits[i-1]) {
            cnt++;
            if (cnt >= 7) {
                cout << "YES";
                return;
            }
        } 
        else {
            cnt = 1;
        }
    }
    cout << "NO";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
}

    return 0;
}