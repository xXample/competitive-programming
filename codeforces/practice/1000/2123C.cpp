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
    
    vi left_min(n, a[0]);
    for (int i = 1; i < n; ++i) {
        left_min[i] = min(left_min[i-1], a[i-1]);
    }

    vi right_max(n, a[n-1]);
    for (int i = n-2; i >= 0; --i) {
        right_max[i] = max(right_max[i+1], a[i+1]);
    }

    // for (auto i : a) cout << i << ' '; cout << '\n';
    // for (auto i : left_min) cout << i << ' '; cout << '\n';
    // for (auto i : right_max) cout << i << ' '; cout << '\n';

    for (int i = 0; i < n; ++i) {
        if (left_min[i] < a[i] && a[i] < right_max[i]) {
            cout << 0;
        }
        else {
            cout << 1;
        }
    }
    cout << '\n';
}

/*
If an elements is the smallest or largest, there's a trivial solution. 
Supppose a[i] is not a min or max
If we can MAKE a[i] into a min or max, then we'll have succeeded. 
It's impossible to "remove" a min via prefix if it's left of a[i]. 
Same goes for the max via suffix if it's to the right. 

ALGORITHM:
Let a be the array. 
for i = 1...n
if a[i] is min or max, output 1
if min of left and max of right are such that left_min < a[i] < right_max, output 0. 
Otherwise, a[i] is a min or max element, so we win. 

PROOF:
Consider all i in 1 ≤ i ≤ n
Now if a[i] is a min or max element, we can simply take the prefix or suffix of the entire array. 
If i == 1 or n, then we can take the prefix or suffix of the entire array except a[i]. Then we can take eithe the prefix or suffix of the whole array.
Let's consider a[i] not min nor max, and i != 1, n.

Case: left_min >= a[i]
Take prefix upto index i. Then since all elements are >= a[i], then the minimum equals a[i]. So they're all converted to a[i].
Take suffix downto index i+1.
Now there are 1 or 2 values remaining. If 1, we are done. Otherwise, we take either the prefix or suffix depending on if a[i] < a[i+1] or not. 

Case: right_max <= a[i]
Similar to above case

Case: Otherwise
That means left_min < a[i] < right_max
Suppose there exists a solution. Let j < i s.t. a[j] is the left_min. 
Then there exists some operation s.t. a[j] == a[i]. 
Now, since prefix operations can only reduce the value of a particular index, we cannot only use prefix operations. 
However, if a suffix operation "passes" index i, then it will cause a[i] = right_max.
Thus, we cannot use suffix either. 









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