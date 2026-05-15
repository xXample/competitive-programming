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
    int n, k;
    string m;
    cin >> n >> k >> m;
    string s(n, '+');
    
    int a = count(all(m), '0');
    int b = count(all(m), '1');
    int c = count(all(m), '2');

    for (int i = 0; i < n; ++i) {
        if (i < a + c || n-b-c <= i) s[i] = '?';
        if (i < a || n-b <= i || k == n) s[i] = '-';
    }
    
    cout << s << '\n';
    return;

    // sort(all(m));

    // int l = 0, r = n-1;
    // int i = 0;
    // while (m[i] == '0' && i < k) {
    //     s[l] = '-';
    //     ++l;
    //     ++i;
    // }
    // while (m[i] == '1' && i < k) {
    //     s[r] = '-';
    //     --r;
    //     ++i;
    // }

    // int moves_left = k - i;
    // int string_left = n - i;
    // if (moves_left >= string_left) {
    //     while (l <= r) {
    //         s[l] = '-';
    //         s[r] = '-';
    //         ++l; --r;
    //     }
    // } else {
    //     while (i < k && l <= r) {
    //         s[l] = '?';
    //         s[r] = '?';
    //         ++l;
    //         --r;
    //         ++i;
    //     }
    // }

    // cout << s << '\n';
    // return;
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