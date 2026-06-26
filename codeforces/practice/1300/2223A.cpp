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
    string a, b, s1, s2;
    cin >> a >> b;

    bool flag = true;
    for (int i = 0; i < n; ++i) {
        if (a[i] == b[i]) {
            s1 += a[i];
            s2 += b[i];
            continue;
        } 
        
        if (flag) {
            s1 += '(';
            s2 += ')';
        }
        else {
            s1 += ')';
            s2 += '(';
        }
        flag = !flag;
    }

    bool is_regular = true;
    int r1 = 0, r2 = 0;
    for (int i = 0; i < n; ++i) {
        if (s1[i] == '(') r1++;
        else r1--;
        if (s2[i] == '(') r2++;
        else r2--;
        if (r1 < 0 || r2 < 0) {
            is_regular = false;
            break;
        }
    }
    if (r1 != 0 || r2 != 0) is_regular = false;
    if (is_regular) cout << "YES\n";
    else cout << "NO\n";
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