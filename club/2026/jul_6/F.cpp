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
    /*
    Everyone must choose at least a 1 and a 0
    No one can choose an even #of 0s. Otherwise, there'll always be an even #of inversions.
    Thus, it's (partially) a game of choosing the "right" number of 0s
        Naievely, it'd suggest that, if there's an odd #of 0s, then just pick all of them...
        And if there's an even #of zeros, pick all but one... but maybe your opponent could still win.
    However, say there's an odd #of 0s... what about the 1s?
    In a sense, we're just doing multiplication: (#of 1s) * (#of 0s)
    ... so this is only true if the string is like 111111111000000000000
    It's more complex if s = 100101010011001010011011110000
    Ok, so we sort of get it.. here
    Now, we need to come up with a strategy, to optimally win
    I want to, at least eventually, trap my enemy, so they always have an even #of inversions.

    Pick odd #of 1s, pick odd #of 0s...
    

    */

    /*
    If entire s has odd #of inversions, delete whole thing, win.
    If entire s has even #of inversions, ......

        0101
        

    */

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