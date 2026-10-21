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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (auto &i : a) cin >> i;
    vi b(n);
    for (auto &i : b) cin >> i;

    bool all_empty = true;
    for (int i = 0; i < n; ++i) {
        if (b[i] != -1) all_empty = false;
    }

    if (all_empty) {
        int a_min = INF;
        int a_max = -INF;
        for (auto i : a) {
            a_min = min(i, a_min);
            a_max = max(i, a_max);
        }
        if (a_min + k >= a_max) {
            cout << a_min + k - a_max + 1 << '\n';
        }
        else {
            cout << 0 << '\n';
        }
        return;
    }
    

// For each fixed b[i], ensure all fixed b[i] are consistent. If not, output 0
    int idx = 0;
    while (b[idx] == -1) ++idx;
    // Let val be such a[i] + b[i]
    int val = a[idx] + b[idx];
    for (int i = idx; i < n; ++i) {
        if (b[i] == -1) continue;
        if (a[i] + b[i] != val) {
            cout << 0 << '\n';
            return;
        }
    }
    
    //     Then, for all j s.t. b[j] isn't fixed,
    //         (we want a[i] + some_val == val, where 0 <= some_val <= k)
    //         (then, val - a[i] == some_val)
    //         if (0 <= val - a[i] && val - a[i] <= k) then continue... else output 0
    //     if we reach the end, output 1

    for (int i = 0; i < n; ++i) {
        if (0 > val - a[i] || val - a[i] > k) {
            cout << 0 << '\n';
            return;
        }
    }

    cout << 1 << '\n';








}

/*
If all of b is -1, and an answer exists, then the answer is biggest_ans - smallest answer + 1.
PROOF
Let a be an array of numbers, and b be all -1. 
Assume an answer exists. 
Let i, j be the indicies of the min and max elements of a
Now a[i] + k is the largest value attainable for index i.
Since for all l, a[i] <= a[l], then a[i] + k <= a[l] + k, and so there's a val <= k s.t. a[i] + k == a[l] + val.
Indeed, since val <= k, then a[i] + k is the largest value we're allowed to do. 
And trivially, the smallest value allowed is a[j] + 0. 
So, the number of solutions is the count of a[j] + 0, a[j] + 1, ..., a[i] + k.
This is max_ans - min_ans + 1.
END PROOF

Suppose not all b are -1. 
Then there are either no answers, or all answers of form a[i] + b[i], for some i.

It is simple to check if all of b is -1 or not. 
It is also simple to check if there exists an answer for an index i:
    Let val be our desired answer.
    If a[i] + b[i] == val, then b[i] == val - a[i].
    So simply check if val - a[i] <= k.

ALGORITHM
Given n,k, a, b
If all b is -1:
    Check if a_min + k <= a_max
    If so, output a_min + k - a_max + 1
    Otherwise, output 0
Else:
    For each fixed b[i], ensure all fixed b[i] are consistent. If not, output 0
    Let val be such a[i] + b[i]
    Then, for all j s.t. b[j] isn't fixed,
        (we want a[i] + some_val == val, where 0 <= some_val <= k)
        (then, val - a[i] == some_val)
        if (0 <= val - a[i] && val - a[i] <= k) then continue... else output 0
    if we reach the end, output 1

PROOF
for all b[i] == -1, see above
since there are fixed b[i], we first check all fixed values are equal
Then for that value, we want to ensure there's 0 <= some_value <= k s.t. a[i] + some_val == value.
We can see from above in the algorithm, I wrote how that works. Done!!




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