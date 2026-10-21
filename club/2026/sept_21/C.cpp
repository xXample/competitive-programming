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
    ll n; 
    cin >> n;
    string s; 
    cin >> s;

    vi cost(n+1, 0);

    // get num of 0s in array
    // num_1 is the #of 1s TO THE LEFT of index, which starts at 0.
    int zero_right = 0, one_left = 0;
    for (char c : s) {
        if (c == '0') {
            ++zero_right;
        }
    }

    // If lowest char is 1, make whole string 1. Forced
    if (s[0] == '1') {
        cout << zero_right << '\n';
        return;
    }

    // Otherwise, s[0] == 0, and we can make any s[i] == 0. 
    for (int i = 0; i < n+1; ++i) {
        if (i == n) {
            cost[i] = one_left;
        }
        else if (s[i] == '0') {
            if (one_left == 0) cost[i] = INF;
            else cost[i] = one_left + zero_right + 1;
            --zero_right;
        }
        else if (s[i] == '1') {
            cost[i] = one_left + zero_right;
            ++one_left;
        }
    }

    int ans = INF;
    for (auto i : cost) ans = min(ans, i);
    cout << ans << '\n';

    // for (auto i : cost) {
    //     cout << i << ' ';
    // }
    // cout << '\n';





}

/*
Exaggeration: we only convert ones or zeros. 
Lowest 1, count #of zeros after.
Highest 0, count #of 1s below. 
Then, take minimum. 
Issue:   01001101
Here, -->00001111, only two operations

bitwise-AND creates 0s usually
bitwise-OR creates 1s usually
maybe relevant: bitwise-Or is functionally useless if it's sorted
                turning 1->0 is impossible if lower 0 doesn't exist
                turning 0->1 is impossible if lower 1 doesn't exist

                Probably true: we should 0->1 on the highest 0s first
               we should 1->0 on the lowest 1s first
I think, converting left, right etc. is not the way. Too "let's just see". 

IDEA
create array size n+1, call cost.
cost[1] = cost to make s[1:] = 1
cost[2] = cost to make s[0:1] = 0, s[2:] = 1
cost[3] = cost ot make s[0:2] = 0, s[3:] = 1, etc. 
If such an arrangement is impossible, give value INF. 

Ok, but how do I calculate this array? 
For cost[i], count #of 1s in a[1:i], and count #of 0s in a[i:n+1]
^ however, if it's impossible, cost[i] = INF.

Ok, I think this works.

*/

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