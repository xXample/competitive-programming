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
    if (a[1] <= a[0]) cout << a[0] + a[1] << '\n';
    else cout << a[0] * 2 << '\n';
}

/*
Given array a of length n, where 0 ≤ a[i] ≤ n
For i < j, a[i] += a[j], a[j] = 0, and then take the min of the first one + min of the first two + ... etc. 
We are working with a prefix sum, sort of. 

We don't need to actually find i, j. We can just return the ending sum. 
a[0] MUST be added.
a[1] "must" be added IF a[1] <= a[0]. else a[1] is not added. 
    If a[1] <= a[0], then 
        if we did a[0] += a[1], then it was added in step 0. 
        else, at step 1 a[1] must be added to the sum
    But if a[1] > a[0], then a[0] will always be chosen in the sum.

// Now, this allows us to find find the vanilla min_val_sum. 
// However, we should be able to take advantage of the making some a[i] = 0. 
// if a[1] <= a[0], then doing the operation is "free", and every subsequent operation == 0.
// if a[1] > a[0], then we would be "adding" extra value not otherwise present. 


The question becomes... when is it worth it to "take the hit"? 
It's definitely worth it when a[i] <= a[i-1]. 
When is it worth when a[i] > a[i-1]? 
--? when a[i] > a[i-1], then operating on a[i] += a[i+1], a[i+1] = 0 makes it worth it

a[1] <= a[0]:
    add a[1] to total, "make a[1] = 0" i.e. set min_val = 0
a[1] > a[0]:
    Then a[1] can be "as big" as we want! It doesn't matter. 
    Because a[1] > a[0] ==> a[0] + a[1] > 2*a[0], 
    then we add a[0] to the total again, and set a[1] += a[2], a[2] = 0 i.e. min_val = 0






set min_val = a[1]
total = a[1]
if (a[2] <= a[1]) return a[1] + a[2]
else return 2*a[1]

PROOF:
We're given an array a[n] s.t. 0 <= a[i] <= n
Now min(a[1]) == a[1], so for step 1, total = a[1] is correct
Now for step 2, we note that 
    if a[2] > a[1], then no matter how large a[2] is, min(a[1], a[2]) = a[1].
    Thus, we can set a[2] += a[3], a[3] = 0. 
    Thus the total is 2*a[1] for the two steps taken. 
    There is no better move since a[2] > a[1] ==> a[1] + a[2] > 2*a[1]. So trying to do the operation earlier is bad.

    if a[2] <= a[1], then since a[2] <= a[1] ==> a[1] + a[2] <= 2*a[1]. So trying to do the operation earlier is good!

    It's easy to see that here, i, j are as small as can be. Make them any larger, and you simply add more to the total.
    Thus, this is the most optimal algorithm.
Ok! All done!




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