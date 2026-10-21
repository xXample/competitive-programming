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
    vi a(n);
    for (auto &i : a) cin >> i;

    int cnt = 1;
    int prev = a[0];
    for (int i = 1; i < n; ++i) {
        if (prev + 1 < a[i]) {
            ++cnt;
            prev = a[i];
        }
    }
    cout << cnt << '\n';

}

/*
Our goal is the maximize the number of large gaps, a[i]+2 == a[i+1] is a large gap. As is anything larger.

ALGORITHM:
We will count the number of arrays.
Count the first element a[1], and set prev = a[1]
Then for i = 2...n, 
    if prev + 1 >= a[i], continue
    else prev = a[i], ++cnt;
return cnt

PROOF:
Of course the first element is in an array, so we count that. 
Now we know the array is non-decreasing. 
After the first element, each subsequent element is equal to or greater than it.
We don't need to consider the size of each array, only if a gap exists that makes the array bigger.
Thus, all we need to do is greedily find the next element whos gap is big enough to cause another array to form
(I don't want to prove this greedy problem).

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