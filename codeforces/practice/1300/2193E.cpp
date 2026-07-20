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
    cin >> n;
    vector<int> dp(n+1, INF);
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        dp[val] = 1;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; j += i) {
            dp[j] = min(dp[j], dp[i] + dp[j/i]);
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (dp[i] == INF) dp[i] = -1;
        cout << dp[i] << " \n"[i==n];
    }
    



    // for (int i = 1; i <= n; ++i) {
        // if (dp[i] != INF) {
        //     cout << dp[i] << ' ';
        //     continue;
        // }

        // for (int div = 2; div*div <= i; ++div) {
        //     if (i % div == 0 && dp[div] != INF && dp[i/div] != INF) {
        //         dp[i] = min(dp[i], dp[div] + dp[i/div]);
        //     }
        // }
        // cout << (dp[i] != INF ? dp[i] : -1) << " \n"[i == n];
    // }
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