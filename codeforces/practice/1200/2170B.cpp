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
    vi b(n);
    for (auto &i : b) cin >> i;
    sort(all(b), greater<int>());

    ll cnt = 0;
    ll summation = 0;
    for (int i = 0; i < n; ++i) {
        if (b[i] != 0) {
            ++cnt;
            summation += b[i];
        }
        else break;
    }
    
    ll ans = min(cnt, summation - n + 1);
    cout << ans << '\n';
    




    // sort it, count #of non-zeros = cnt;
    // In one case, non-zeros 

    /*
    5
    1 1 1 1 1 --> 1

    2 1 1 1 1 --? 2
    3 2 1 1 1 --> 3
    */

    // (b_max = n):
        // ans = min(#of non-zeros, b_max);
    // (sum(b) = n):
        // ans = 1

    // Difficulty lies in having exactly n operations
    // 


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