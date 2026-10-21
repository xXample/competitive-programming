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
    // vector a = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3};
    // sort(all(a));
    // for (auto i : a) cout << i << ' ';
    // cout << '\n';

    int n, k; 
    cin >> n >> k;
    vi a(n); for (auto &i : a) cin >> i;

    vi count(n+1, 0);
    for (auto i : a) {
        ++count[i];
    }

    int points = 0;
    for (auto i : a) {
        int val = k-i;

        if (val == i && count[val] < 2) continue; 
        if (1 <= val && val <= n && count[val] > 0 && count[i] > 0) {
            --count[val];
            --count[i];
            ++points;
        }
    }

    cout << points << '\n';

}
/*
Algorithm: 
Count the number of pairs of numbers that add to k. Return this sum. 
Count the number of times each number appears in the array. 
For each i = 1...n:
    if i and k - a[i] are both in the count array: 
        reduce that count by one, add 1 point

PROOF: 
We show that Alice cannot improve her score by changing their order. 
Let c1, c2, ..., c(n/2) be the n/2 choices alice makes, where ci is some index. 
Suppose for some i < j, swapping those two choices stricty increases the score. 
This implies that bi and bj (bob's choices) are also different. In this case, they aren't swapped. 
So cj, bi, and ci, bj. 
So this is strictly better for Bob, who is trying to maximize the score. 
So score[(cj, bi), (ci, bj)] > score[(ci, bi), (cj, bj)]
But when Alice picked ci first earlier, bj was available still, so Bob should have picked it in the first place. 
This contradicts Bob always making the choice that maximizes the score. 
Therefore, it doesn't matter what order Alice picks the elements. 


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