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
    vi a;
    vi seen(n+1, 0);
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (seen[val]) continue;
        seen[val] = 1;
        a.push_back(val);
    }
    for (int i = 0; i < k-1; ++i) {
        if (!seen[i]) {
            cout << i << '\n';
            return;
        }
        if (i == k-2) cout << i+1 << '\n';
    }
}

/*
Given array a, and integer k
reduce the array to size k-1 by doing this operations n - (k-1) times:
    Figure out all mex of all subarrays of size k. 
    Of those that are the maximum value, delete exactly one index from them.
    Repeat.
It should be such that the end MEX value is maximized.

How do I even approach this? 
The end MEX should contain a 0 if possible. Otherwise, it'll just be 0.

If we can remove "duplicate numbers", then the MEX will not change.

GUESS: The answer is equivalent to if we could simply remove any arbitrary n-k+1 elements.

let k = 4
[0, 1, 2, 3, 4, 0, 0, 0]
[1, 2, 3, 4, 0, 0, 0]
[1, 2, 3, 0, 0, 0]
[1, 2, 3, 0, 0]
[1, 2, 3, 0]

PROOF:
Since we end at array size k-1, the largest value is at most k-1.
Now, if there exist no duplicates, and our subarray is size k, at our ending array is size at k-1, then there must exist an element in our maximum MEX subarray that is >= k-1.
Thus, we remove such element. We repeat this until our subarray contains elements 0, 1, 2, ..., k-2. 
This is equivalent to removing the first largest n-k+1 elements.

Ok. What if there are duplicates? 
Again, find a subarray that contains a maximum MEX value — there may be multiple since there are duplicates!
If any max_subarray contains a duplicate, remove those first. 
If simply following this the array reaches size k-1, then we've "won" since the maximum never changed.
Suppose eventually, none of the maximums contain a duplicate anymore. 
Case: No duplicates exist in the whole array: this is equivalent to the case above of no duplicates. 
Case: Duplicates still exist in the array, while not existing within any subarray:
    We only need exactly one "maximum" subarray. Then, we simply remove an indice of each maximum until there is exactly one maximum. 
    Now, this maximum subarray is size k. We want k-1 elements. Remove the largest element. And then remove all the extra elements.

I'm not sure this constitues a "proof". I think there's some work missing.

PROOF:
Note there exist some optimal ending array of size k-1. 
At each step, we use a subarray of size k. 
If a maximum subarray contains duplicates, or numbers >= k-1, then we simply remove them. This is always possible by the pigeon-hole principle.
We can therefore simply repeat this for any given maximum subarray until the array is size k-1. 
Now, if the max MEX value is < k-1, then the final subarray must contain duplicates or values >= k-1. 
Thus, the MEX of the whole array never changes, and the answer is MEX(a). 
But if the max MEX value is >= k-1 (for the whole array), then we will necessarily have to exclude some of those values. 
So simply keep excluding until you reach an array of size k-1. 

Thus, we can take a maximum MEX subarray of the whole array, and remove any duplicate values, or values >= k-1.
This is equivalent to simply removing all duplicate values, and then checking the MEX of the array, excluding values >= k-1.



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