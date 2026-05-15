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
    int A, B, C, X;
    // cin >> A >> B >> C >> X;
    X = 5;
    int cnt = 0;
    vi vec(0, X+1);
    cout << vec[0];
    
    for (int i = 0; i < X+1; ++i) {
        if (i+500 < X+1) vec[i+500] += vec[i];
        if (i+100 < X+1) vec[i+100] += vec[i];
        if (i+50 < X+1)  vec[i+50] += vec[i];
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
}

    return 0;
}