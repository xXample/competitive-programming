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
    ll n; 
    cin >> n;
    string s;
    cin >> s;


    // If s is odd-len, and has odd #of 1s, return -1
    ll one_cnt = 0;
    ll zero_cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') ++one_cnt;
        else ++zero_cnt;
    }

    bool len_even = n % 2 == 0;
    bool one_even = one_cnt % 2 == 0;
    bool zero_even = zero_cnt % 2 == 0;
    vll nums;

    if (!len_even && !one_even) {
        cout << -1 << '\n';
        return;
    }

    // even len, odd 1s, odd 0s
    // JUST RETURN IDX OF 0s
    if (len_even && !one_even && !zero_even) {
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') nums.pb(i+1);
        }
    }

    // odd len, even 1s, odd 0s
    // even len, even1s, even 0s
    // JUST RETURN IDX OF 1s
    else {
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') nums.pb(i+1);
        }
    }
    
    cout << sz(nums) << '\n';
    if (sz(nums) == 0) return;

    for (int i = 0; i < sz(nums); ++i) {
        cout << nums[i] << ' ';
    }
    cout << '\n';
    return;
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